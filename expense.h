#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

// Represents an individual expense
// Each expense includes an amount, category, description, and date
class Expense {
private:
    double amount;          // Amount of the expense
    std::string category;   // Category of the expense
    std::string description;// Description of the expense
    std::string date;       // Date of the expense in "yyyy-MM-dd" format

public:
    // Constructor to initialize an expense with its details
    Expense(double amt, const std::string& cat, const std::string& desc, const std::string& dt);

    // Getters for expense details
    double getAmount() const;
    std::string getCategory() const;
    std::string getDescription() const;
    std::string getDate() const;

    // Setters for updating expense details
    void setAmount(double amt);
    void setCategory(const std::string& cat);
    void setDescription(const std::string& desc);
    void setDate(const std::string& dt);

    // Displays the expense details to the console
    void displayExpense() const;
};

#endif // EXPENSE_H
