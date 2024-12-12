/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QLabel *label_2;
    QLineEdit *usernameLineEdit;
    QLabel *label_3;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QLabel *errorLabel;
    QPushButton *setBudgetButton;
    QLabel *label_11;
    QPushButton *hintButton;
    QWidget *mainManagerPage;
    QLabel *label;
    QLineEdit *descriptionLineEdit;
    QLineEdit *amountLineEdit;
    QPushButton *addExpenseButton;
    QTableWidget *expenseTable;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *removeExpenseButton;
    QPushButton *viewExpenseButton;
    QLabel *budgetDisplayLabel;
    QComboBox *categoryComboBox;
    QDateEdit *dateEdit;
    QLabel *label_12;
    QWidget *viewExpensePage;
    QPushButton *backToManagerButton;
    QTableWidget *expenseViewTable;
    QLineEdit *minPriceFilter;
    QLineEdit *maxPriceFilter;
    QComboBox *categoryComboBoxView;
    QPushButton *filterPriceButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *budgetDisplayLabel_2;
    QLabel *totalBudgetUsedLabel;
    QLabel *overBudgetLabel;
    QLabel *remainingBudgetLabel;
    QLabel *label_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 0, 801, 541));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        label_2 = new QLabel(loginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 190, 81, 16));
        usernameLineEdit = new QLineEdit(loginPage);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(340, 190, 113, 24));
        label_3 = new QLabel(loginPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 240, 71, 16));
        passwordLineEdit = new QLineEdit(loginPage);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(340, 240, 113, 24));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(510, 190, 101, 31));
        errorLabel = new QLabel(loginPage);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setGeometry(QRect(290, 60, 49, 16));
        setBudgetButton = new QPushButton(loginPage);
        setBudgetButton->setObjectName("setBudgetButton");
        setBudgetButton->setGeometry(QRect(510, 240, 101, 31));
        label_11 = new QLabel(loginPage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(330, 160, 151, 16));
        hintButton = new QPushButton(loginPage);
        hintButton->setObjectName("hintButton");
        hintButton->setGeometry(QRect(360, 280, 71, 31));
        stackedWidget->addWidget(loginPage);
        mainManagerPage = new QWidget();
        mainManagerPage->setObjectName("mainManagerPage");
        label = new QLabel(mainManagerPage);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 120, 91, 16));
        descriptionLineEdit = new QLineEdit(mainManagerPage);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(210, 167, 101, 24));
        amountLineEdit = new QLineEdit(mainManagerPage);
        amountLineEdit->setObjectName("amountLineEdit");
        amountLineEdit->setGeometry(QRect(200, 87, 113, 24));
        addExpenseButton = new QPushButton(mainManagerPage);
        addExpenseButton->setObjectName("addExpenseButton");
        addExpenseButton->setGeometry(QRect(560, 90, 121, 41));
        expenseTable = new QTableWidget(mainManagerPage);
        if (expenseTable->columnCount() < 4)
            expenseTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        expenseTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        expenseTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        expenseTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        expenseTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        expenseTable->setObjectName("expenseTable");
        expenseTable->setGeometry(QRect(130, 260, 551, 271));
        expenseTable->horizontalHeader()->setDefaultSectionSize(135);
        label_4 = new QLabel(mainManagerPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 87, 61, 16));
        label_5 = new QLabel(mainManagerPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 127, 91, 16));
        label_6 = new QLabel(mainManagerPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 167, 81, 16));
        label_7 = new QLabel(mainManagerPage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(130, 207, 58, 16));
        removeExpenseButton = new QPushButton(mainManagerPage);
        removeExpenseButton->setObjectName("removeExpenseButton");
        removeExpenseButton->setGeometry(QRect(560, 140, 121, 41));
        viewExpenseButton = new QPushButton(mainManagerPage);
        viewExpenseButton->setObjectName("viewExpenseButton");
        viewExpenseButton->setGeometry(QRect(560, 190, 121, 41));
        budgetDisplayLabel = new QLabel(mainManagerPage);
        budgetDisplayLabel->setObjectName("budgetDisplayLabel");
        budgetDisplayLabel->setGeometry(QRect(300, 40, 201, 16));
        categoryComboBox = new QComboBox(mainManagerPage);
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->setObjectName("categoryComboBox");
        categoryComboBox->setGeometry(QRect(200, 130, 121, 21));
        dateEdit = new QDateEdit(mainManagerPage);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(180, 207, 131, 22));
        dateEdit->setCalendarPopup(true);
        label_12 = new QLabel(mainManagerPage);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(400, 10, 81, 16));
        stackedWidget->addWidget(mainManagerPage);
        viewExpensePage = new QWidget();
        viewExpensePage->setObjectName("viewExpensePage");
        backToManagerButton = new QPushButton(viewExpensePage);
        backToManagerButton->setObjectName("backToManagerButton");
        backToManagerButton->setGeometry(QRect(30, 460, 71, 31));
        expenseViewTable = new QTableWidget(viewExpensePage);
        if (expenseViewTable->columnCount() < 4)
            expenseViewTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        expenseViewTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        expenseViewTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        expenseViewTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        expenseViewTable->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        expenseViewTable->setObjectName("expenseViewTable");
        expenseViewTable->setGeometry(QRect(270, 120, 531, 401));
        expenseViewTable->horizontalHeader()->setVisible(true);
        expenseViewTable->horizontalHeader()->setCascadingSectionResizes(true);
        expenseViewTable->horizontalHeader()->setDefaultSectionSize(130);
        minPriceFilter = new QLineEdit(viewExpensePage);
        minPriceFilter->setObjectName("minPriceFilter");
        minPriceFilter->setGeometry(QRect(170, 250, 61, 21));
        maxPriceFilter = new QLineEdit(viewExpensePage);
        maxPriceFilter->setObjectName("maxPriceFilter");
        maxPriceFilter->setGeometry(QRect(170, 300, 61, 21));
        categoryComboBoxView = new QComboBox(viewExpensePage);
        categoryComboBoxView->addItem(QString());
        categoryComboBoxView->addItem(QString());
        categoryComboBoxView->addItem(QString());
        categoryComboBoxView->addItem(QString());
        categoryComboBoxView->addItem(QString());
        categoryComboBoxView->addItem(QString());
        categoryComboBoxView->setObjectName("categoryComboBoxView");
        categoryComboBoxView->setGeometry(QRect(120, 200, 121, 32));
        filterPriceButton = new QPushButton(viewExpensePage);
        filterPriceButton->setObjectName("filterPriceButton");
        filterPriceButton->setGeometry(QRect(130, 350, 100, 32));
        label_8 = new QLabel(viewExpensePage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 200, 111, 20));
        label_9 = new QLabel(viewExpensePage);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 250, 141, 20));
        label_10 = new QLabel(viewExpensePage);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 300, 141, 20));
        budgetDisplayLabel_2 = new QLabel(viewExpensePage);
        budgetDisplayLabel_2->setObjectName("budgetDisplayLabel_2");
        budgetDisplayLabel_2->setGeometry(QRect(270, 50, 201, 16));
        totalBudgetUsedLabel = new QLabel(viewExpensePage);
        totalBudgetUsedLabel->setObjectName("totalBudgetUsedLabel");
        totalBudgetUsedLabel->setGeometry(QRect(40, 40, 461, 16));
        overBudgetLabel = new QLabel(viewExpensePage);
        overBudgetLabel->setObjectName("overBudgetLabel");
        overBudgetLabel->setGeometry(QRect(40, 100, 511, 21));
        remainingBudgetLabel = new QLabel(viewExpensePage);
        remainingBudgetLabel->setObjectName("remainingBudgetLabel");
        remainingBudgetLabel->setGeometry(QRect(40, 70, 451, 16));
        label_13 = new QLabel(viewExpensePage);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(390, 10, 81, 16));
        stackedWidget->addWidget(viewExpensePage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        errorLabel->setText(QString());
        setBudgetButton->setText(QCoreApplication::translate("MainWindow", "Set Budget", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Welcome to WealthWay", nullptr));
        hintButton->setText(QCoreApplication::translate("MainWindow", "HINT", nullptr));
        label->setText(QString());
        descriptionLineEdit->setText(QString());
        amountLineEdit->setText(QString());
        addExpenseButton->setText(QCoreApplication::translate("MainWindow", "Add Expense", nullptr));
        QTableWidgetItem *___qtablewidgetitem = expenseTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = expenseTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = expenseTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = expenseTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Amount:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Category:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Description: ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        removeExpenseButton->setText(QCoreApplication::translate("MainWindow", "Remove Expense", nullptr));
        viewExpenseButton->setText(QCoreApplication::translate("MainWindow", "View Expenses", nullptr));
        budgetDisplayLabel->setText(QString());
        categoryComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        categoryComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Entertainment", nullptr));
        categoryComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Transportation", nullptr));
        categoryComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Rent", nullptr));
        categoryComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Other", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "WealthWay", nullptr));
        backToManagerButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = expenseViewTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = expenseViewTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = expenseViewTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = expenseViewTable->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        categoryComboBoxView->setItemText(0, QCoreApplication::translate("MainWindow", "All", nullptr));
        categoryComboBoxView->setItemText(1, QCoreApplication::translate("MainWindow", "Food", nullptr));
        categoryComboBoxView->setItemText(2, QCoreApplication::translate("MainWindow", "Entertainment", nullptr));
        categoryComboBoxView->setItemText(3, QCoreApplication::translate("MainWindow", "Transportation", nullptr));
        categoryComboBoxView->setItemText(4, QCoreApplication::translate("MainWindow", "Rent", nullptr));
        categoryComboBoxView->setItemText(5, QCoreApplication::translate("MainWindow", "Other", nullptr));

        filterPriceButton->setText(QCoreApplication::translate("MainWindow", "Filter Price", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Filter Category: ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Filter Minimum Price: ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Filter Maximum Price: ", nullptr));
        budgetDisplayLabel_2->setText(QString());
        totalBudgetUsedLabel->setText(QString());
        overBudgetLabel->setText(QString());
        remainingBudgetLabel->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "WealthWay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
