#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

// Represents a category of expenses, such as "Food" or "Transportation"
// Each category has a name and a budget limit.
class Category {
private:
    std::string name;    // Name of the category
    float budgetLimit;   // Budget limit for this category

public:
    // Constructor to initialize a category with a name and budget
    Category(const std::string& name, float budget);

    // Getter for category name
    std::string getCategoryName() const;

    // Setter for category name
    void setCategoryName(const std::string& name);

    // Getter for budget limit
    float getBudgetLimit() const;

    // Setter for budget limit
    void setBudgetLimit(float budget);
};

#endif // CATEGORY_H
