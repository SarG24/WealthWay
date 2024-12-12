#include "category.h"

// Constructor to initialize a category with a name and budget
Category::Category(const std::string& name, float budget)
    : name(name), budgetLimit(budget) {}

// Returns the name of the category
std::string Category::getCategoryName() const { return name; }

// Sets a new name for the category
void Category::setCategoryName(const std::string& name) { this->name = name; }

// Returns the budget limit for the category
float Category::getBudgetLimit() const { return budgetLimit; }

// Sets a new budget limit for the category
void Category::setBudgetLimit(float budget) { this->budgetLimit = budget; }
