#include "main_manager.h"

// Adds a new expense to the expense list
void MainManager::addExpense(const Expense& exp) {
    expenses.push_back(exp);
}

// Removes an expense at a given index from the expense list
void MainManager::removeExpense(int expenseId) {
    if (expenseId >= 0 && expenseId < expenses.size()) {
        expenses.erase(expenses.begin() + expenseId);
    }
}

// Calculates the total expense for a specific category
float MainManager::getTotalExpenseByCategory(const std::string& category) const {
    float total = 0.0f;
    for (const auto& exp : expenses) {
        if (exp.getCategory() == category) {
            total += exp.getAmount();
        }
    }
    return total;
}
