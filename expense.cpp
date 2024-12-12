#include "expense.h"
#include <iostream>

// Constructor to initialize an expense with all details
Expense::Expense(double amt, const std::string& cat, const std::string& desc, const std::string& dt)
    : amount(amt), category(cat), description(desc), date(dt) {}

// Getters for retrieving expense details
double Expense::getAmount() const { return amount; }
std::string Expense::getCategory() const { return category; }
std::string Expense::getDescription() const { return description; }
std::string Expense::getDate() const { return date; }

// Setters for updating expense details
void Expense::setAmount(double amt) { amount = amt; }
void Expense::setCategory(const std::string& cat) { category = cat; }
void Expense::setDescription(const std::string& desc) { description = desc; }
void Expense::setDate(const std::string& dt) { date = dt; }

// Prints the expense details to the console
void Expense::displayExpense() const {
    std::cout << "Date: " << date << ", Amount: $" << amount
              << ", Category: " << category
              << ", Description: " << description << std::endl;
}
