#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector>
#include "expense.h"
#include "user.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


// Main application window that manages user interactions
// Handles UI events for adding, viewing, and removing expenses
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    // Method that adds expenses
    void on_addExpenseButton_clicked();
    // Method for login button
    void on_loginButton_clicked();
    // Method that removes expenses
    void on_removeExpenseButton_clicked();
    // Method that changes user screen to new page to views all expneses
    void on_viewExpenseButton_clicked();
    // Method that sends user back to expenses page
    void on_backToManagerButton_clicked();
    // Method that live updates budget left
    void updateBudgetDisplay();
    // Method that sets budget for user when logging in
    void on_setBudgetButton_clicked();
    // Method that changes color of budget
    void highlightOverBudgetExpenses();
    // Method that filteres expenses by category
    void on_categoryComboBoxView_currentIndexChanged(int index);
    // Method that filteres expenses by prices
    void on_filterPriceButton_clicked();
    void updateBudgetSummary();
    // Method that shows user what the username and password is
    void on_hintButton_clicked();
    void on_generateSummaryReportButton_clicked();
    void on_generateGraphicalReportButton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Expense> expenses;  // Store expenses
    User currentUser;           // Add currentUser to handle login
};

#endif // MAINWINDOW_H

