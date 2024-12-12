#ifndef MAINMANAGER_H
#define MAINMANAGER_H

#include <vector>
#include "expense.h"
#include "category.h"


// Manages all expenses and categories
// Provides functionality to add, remove, and analyze expenses
class MainManager {
private:

    // List of all expenses
    std::vector<Expense> expenses;
    // List of all categories
    std::vector<Category> categories;

    // Private constructor
    MainManager() = default;

    // Private destructor
    ~MainManager() = default;

    // Delete copy constructor and assignment operator
    MainManager(const MainManager&) = delete;
    MainManager& operator=(const MainManager&) = delete;

public:
    // Static method to get the instance
    static MainManager& getInstance();

    // Adds a new expense to the system
    void addExpense(const Expense& exp);

    // Removes an expense by its ID (index in the list)
    void removeExpense(int expenseId);

    // Calculates the total expenses for a given category
    float getTotalExpenseByCategory(const std::string& category) const;
};

#endif // MAINMANAGER_H
