#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "expense.h"
#include "summary_report.h"
#include "graphical_report.h"
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QInputDialog>
#include <QtWidgets/QVBoxLayout>
#include <QVBoxLayout>



// Constructor for MainWindow, sets up the UI and initializes the application with default values
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , currentUser("admin", "password", 1000.0f)  // Example user for login
{
    ui->setupUi(this);  // Setup UI components

    // Apply custom stylesheet for the application's appearance
    this->setStyleSheet(R"(
    QMainWindow {
        background-color: #2E2E2E; /* Dark Grey Background */
    }

    QLabel {
        color: #E0E0E0; /* Light Text */
        font-size: 14px;
    }

    QPushButton {
        background-color: #4CAF50; /* Green Accent */
        color: white;
        border-radius: 5px;
        padding: 5px;
    }

    QPushButton:disabled {
        background-color: #555; /* Disabled Grey */
        color: #888;
    }

    QLineEdit, QComboBox, QDateEdit {
        background-color: #333;
        color: #E0E0E0;
        border: 1px solid #555;
        border-radius: 4px;
        padding: 4px;
    }

    QTableWidget {
        background-color: #1F1F1F;
        color: #E0E0E0;
        gridline-color: #555;
    }

    QHeaderView::section {
        background-color: #444;
        color: #E0E0E0;
        border: 1px solid #555;
    }
    )");

    // Display the login page initially
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
    ui->loginButton->setEnabled(false);  // Disable login button until conditions are met

    // Configure the expense view table with 4 columns and set header labels
    ui->expenseViewTable->setColumnCount(4);
    ui->expenseViewTable->setHorizontalHeaderLabels({"Date", "Amount", "Category", "Description"});

    // Connect signals to respective slots for dynamic interaction
    connect(ui->categoryComboBoxView, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::on_categoryComboBoxView_currentIndexChanged);
    connect(ui->filterPriceButton, &QPushButton::clicked, this, &MainWindow::on_filterPriceButton_clicked);
}

// Destructor for MainWindow, cleans up UI resources
MainWindow::~MainWindow()
{
    delete ui;  // Release the UI object
}

// Slot to handle login button click
void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();  // Get username input
    QString password = ui->passwordLineEdit->text();  // Get password input

    // Check if budget is set before allowing login
    if (!currentUser.hasBudgetSet()) {
        QMessageBox::warning(this, "Set Budget", "You must set a budget before logging in.");
        return;
    }

    // Validate non-empty username and password fields
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Username and Password cannot be empty.");
        return;
    }

    // Verify login credentials and proceed if valid
    if (currentUser.login(username.toStdString(), password.toStdString())) {
        ui->stackedWidget->setCurrentWidget(ui->mainManagerPage);  // Switch to main manager page
        updateBudgetDisplay();  // Update budget display with current data
    } else {
        QMessageBox::critical(this, "Login Failed", "Invalid username or password.");  // Show error for invalid login
    }
}

// Method to update the budget display based on current expenses
void MainWindow::updateBudgetDisplay()
{
    float totalExpenses = 0.0f;  // Initialize total expenses

    // Sum up all expense amounts
    for (const Expense &exp : expenses) {
        totalExpenses += exp.getAmount();
    }

    float remainingBudget = currentUser.getUserBudget() - totalExpenses;  // Calculate remaining budget

    // Format and display the remaining budget, change label color based on budget state
    QString budgetText = "Remaining Budget: $" + QString::number(remainingBudget, 'f', 2);

    if (remainingBudget < 0) {
        ui->budgetDisplayLabel->setStyleSheet("color: red;");  // Red for negative budget
    } else {
        ui->budgetDisplayLabel->setStyleSheet("color: green;");  // Green for positive budget
    }

    ui->budgetDisplayLabel->setText(budgetText);  // Set text for budget label
}

// Slot to handle adding a new expense
void MainWindow::on_addExpenseButton_clicked()
{
    bool ok;  // Flag for successful conversion
    double amount = ui->amountLineEdit->text().toDouble(&ok);  // Get amount input

    // Validate input amount
    if (!ok || amount <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid numeric value greater than 0 for the amount.");
        return;
    }

    QString category = ui->categoryComboBox->currentText();  // Get category input
    QString description = ui->descriptionLineEdit->text();  // Get description input
    QString date = ui->dateEdit->date().toString("yyyy-MM-dd");  // Get date input

    // Ensure description is not empty
    if (description.trimmed().isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Please provide a description for the expense.");
        return;
    }

    // Create and store the new expense
    Expense newExpense(amount, category.toStdString(), description.toStdString(), date.toStdString());
    expenses.append(newExpense);

    int row = ui->expenseTable->rowCount();  // Get current row count
    ui->expenseTable->insertRow(row);  // Insert a new row

    // Populate the row with expense details
    ui->expenseTable->setItem(row, 0, new QTableWidgetItem(date));
    ui->expenseTable->setItem(row, 1, new QTableWidgetItem("$" + QString::number(amount)));
    ui->expenseTable->setItem(row, 2, new QTableWidgetItem(category));
    ui->expenseTable->setItem(row, 3, new QTableWidgetItem(description));

    // Clear input fields post addition
    ui->amountLineEdit->clear();
    ui->descriptionLineEdit->clear();
    ui->categoryComboBox->setCurrentIndex(0);
    ui->dateEdit->setDate(QDate::currentDate());

    // Confirm addition and update displays
    QMessageBox::information(this, "Expense Added", "Your expense has been added to the table!");
    updateBudgetDisplay();
    highlightOverBudgetExpenses();  // Highlight expenses exceeding budget
}

// Highlights expenses exceeding the budget by changing their text color
void MainWindow::highlightOverBudgetExpenses()
{
    float totalExpenses = 0.0f;  // Track total expenses
    float remainingBudget = currentUser.getUserBudget();  // Start with total budget

    // Loop through all expenses to determine over-budget status
    for (int i = 0; i < expenses.size(); ++i) {
        totalExpenses += expenses[i].getAmount();  // Add expense amount
        remainingBudget = currentUser.getUserBudget() - totalExpenses;  // Update remaining budget

        // Set row color based on budget state
        for (int j = 0; j < 4; ++j) {
            if (remainingBudget < 0) {
                ui->expenseTable->item(i, j)->setForeground(QBrush(Qt::red));  // Red for over-budget
            } else {
                ui->expenseTable->item(i, j)->setForeground(QBrush(Qt::green));  // Green for within budget
            }
        }
    }
}

// Slot to handle expense removal based on exact match of input fields
void MainWindow::on_removeExpenseButton_clicked()
{
    double amount = ui->amountLineEdit->text().toDouble();  // Get amount input
    QString date = ui->dateEdit->date().toString("yyyy-MM-dd");  // Get date input
    QString description = ui->descriptionLineEdit->text();  // Get description input
    QString category = ui->categoryComboBox->currentText();  // Get category input

    bool found = false;  // Flag for found expense

    // Loop to find and remove matching expense
    for (int i = 0; i < expenses.size(); ++i) {
        const Expense &exp = expenses[i];  // Get current expense

        // Check if all fields match
        if (exp.getAmount() == amount &&
            QString::fromStdString(exp.getDate()) == date &&
            QString::fromStdString(exp.getDescription()) == description &&
            QString::fromStdString(exp.getCategory()) == category) {

            expenses.remove(i);  // Remove from QVector
            ui->expenseTable->removeRow(i);  // Remove row from table
            found = true;  // Mark as found

            QMessageBox::information(this, "Expense Removed", "The matching expense has been removed.");  // Notify user
            updateBudgetDisplay();  // Update budget after removal
            highlightOverBudgetExpenses();  // Recalculate budget highlighting
            break;  // Stop loop after finding a match
        }
    }

    // Notify if no matching expense is found
    if (!found) {
        QMessageBox::warning(this, "No Match Found", "No expense matches the provided details.");
    }

    // Clear input fields after removal attempt
    ui->amountLineEdit->clear();
    ui->dateEdit->setDate(QDate::currentDate());
    ui->descriptionLineEdit->clear();
    ui->categoryComboBox->setCurrentIndex(0);  // Reset category selection
}

// Slot to navigate back to the main manager page
void MainWindow::on_backToManagerButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainManagerPage);  // Switch to main manager page
}

// Updates and displays the budget summary with used, remaining, and over-budget values
void MainWindow::updateBudgetSummary()
{
    float totalExpenses = 0.0f;  // Sum total expenses

    // Calculate total expenses
    for (const Expense &exp : expenses) {
        totalExpenses += exp.getAmount();
    }

    float remainingBudget = currentUser.getUserBudget() - totalExpenses;  // Calculate remaining budget
    float overBudget = (remainingBudget < 0) ? -remainingBudget : 0;  // Calculate over-budget if applicable

    // Update budget summary labels in the view expense page
    ui->totalBudgetUsedLabel->setText("Total Budget Used: $" + QString::number(totalExpenses, 'f', 2));
    ui->overBudgetLabel->setText("Over Budget: $" + QString::number(overBudget, 'f', 2));
    ui->remainingBudgetLabel->setText("Remaining Budget: $" + QString::number(remainingBudget, 'f', 2));

    // Change text color based on budget state
    if (remainingBudget < 0) {
        ui->remainingBudgetLabel->setStyleSheet("color: red;");  // Red for over-budget
    } else {
        ui->remainingBudgetLabel->setStyleSheet("color: green;");  // Green for within budget
    }
}

// Slot to switch to the view expense page and display all expenses
void MainWindow::on_viewExpenseButton_clicked()
{
    ui->expenseViewTable->setRowCount(0);  // Clear existing rows in the view table

    // Populate view table with all expenses
    for (const Expense &expense : expenses) {
        int row = ui->expenseViewTable->rowCount();
        ui->expenseViewTable->insertRow(row);

        ui->expenseViewTable->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(expense.getDate())));
        ui->expenseViewTable->setItem(row, 1, new QTableWidgetItem(QString::number(expense.getAmount())));
        ui->expenseViewTable->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(expense.getCategory())));
        ui->expenseViewTable->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(expense.getDescription())));
    }

    updateBudgetSummary();  // Update budget summary for view page
    ui->stackedWidget->setCurrentWidget(ui->viewExpensePage);  // Switch to view expense page
}

// Slot to filter expenses by category and price range in the view table
void MainWindow::on_categoryComboBoxView_currentIndexChanged(int index)
{
    QString selectedCategory = ui->categoryComboBoxView->currentText();  // Get selected category
    double minPrice = ui->minPriceFilter->text().toDouble();  // Get minimum price filter
    double maxPrice = ui->maxPriceFilter->text().toDouble();  // Get maximum price filter

    ui->expenseViewTable->setRowCount(0);  // Clear current table rows

    // Populate table with filtered expenses
    for (const Expense &expense : expenses) {
        double expenseAmount = expense.getAmount();
        QString expenseCategory = QString::fromStdString(expense.getCategory());

        // Apply category and price filters
        if ((selectedCategory == "All" || expenseCategory == selectedCategory) &&
            (minPrice == 0 && maxPrice == 0 || (expenseAmount >= minPrice && expenseAmount <= maxPrice))) {

            int row = ui->expenseViewTable->rowCount();
            ui->expenseViewTable->insertRow(row);

            ui->expenseViewTable->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(expense.getDate())));
            ui->expenseViewTable->setItem(row, 1, new QTableWidgetItem(QString::number(expenseAmount)));
            ui->expenseViewTable->setItem(row, 2, new QTableWidgetItem(expenseCategory));
            ui->expenseViewTable->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(expense.getDescription())));
        }
    }

    // Inform user if no matching rows found
    if (ui->expenseViewTable->rowCount() == 0) {
        QMessageBox::information(this, "No Results", "No expenses match the current filters.");
    }
}

// Slot to filter expenses based on price range and update view table
void MainWindow::on_filterPriceButton_clicked()
{
    bool minOk, maxOk;  // Flags for valid conversion
    double minPrice = ui->minPriceFilter->text().toDouble(&minOk);  // Get minimum price
    double maxPrice = ui->maxPriceFilter->text().toDouble(&maxOk);  // Get maximum price

    // Validate price inputs
    if (!minOk || minPrice < 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid numeric value for the minimum price.");
        return;
    }

    if (!maxOk || maxPrice < 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid numeric value for the maximum price.");
        return;
    }

    if (maxPrice > 0 && minPrice > maxPrice) {
        QMessageBox::warning(this, "Invalid Range", "Minimum price cannot be greater than maximum price.");
        return;
    }

    // Reapply combined filters
    on_categoryComboBoxView_currentIndexChanged(ui->categoryComboBoxView->currentIndex());
}

// Slot to set user's budget using an input dialog
void MainWindow::on_setBudgetButton_clicked()
{
    bool ok;  // Flag for valid input
    double budget = QInputDialog::getDouble(this, "Set Budget", "Enter your budget:", 0, 0, 100000, 2, &ok);  // Get budget input

    // Validate input budget
    if (!ok || budget <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid budget greater than 0.");
        return;
    }

    currentUser.setUserBudget(budget);  // Set the user's budget
    QMessageBox::information(this, "Budget Set", "Your budget has been set to $" + QString::number(budget, 'f', 2));  // Notify user
    ui->loginButton->setEnabled(true);  // Enable login after setting budget
}

// Slot to display login hint message
void MainWindow::on_hintButton_clicked()
{
    QMessageBox::information(this, "Login Hint", "Username: admin\nPassword: password\n\nYou're welcome! :)");  // Show login hint
}


void MainWindow::on_generateSummaryReportButton_clicked() {
    SummaryReport summaryReport(std::vector<Expense>(expenses.begin(), expenses.end()));
    QString summary = QString::fromStdString(summaryReport.generate());

    // Display the enhanced summary in a message box
    QMessageBox::information(this, "Summary Report", summary);
}




void MainWindow::on_generateGraphicalReportButton_clicked() {
    GraphicalReport graphicalReport(std::vector<Expense>(expenses.begin(), expenses.end()));

    // Generate the pie chart
    QChartView* chartView = graphicalReport.generateChart();

    // Create a new window to display the chart
    QWidget* chartWindow = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(chartWindow);
    layout->addWidget(chartView);

    chartWindow->setWindowTitle("Graphical Report - Pie Chart");
    chartWindow->resize(800, 600);
    chartWindow->show();
}
