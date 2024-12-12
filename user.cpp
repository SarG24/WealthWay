#include "user.h"

// Constructor: Initializes the User object with a username, password, and initial budget.
// The budget is set during initialization, and isBudgetSet is initially false.
User::User(const std::string& username, const std::string& password, float budget)
    : username(username), password(password), budget(budget), isBudgetSet(false) {}

// Function: Verifies the provided username and password against the stored credentials.
bool User::login(const std::string& username, const std::string& password) const {
    return this->username == username && this->password == password;
}

// Function: Sets the user's budget and marks the budget as set.
void User::setUserBudget(float budget) {
    this->budget = budget;
    this->isBudgetSet = true;  // Mark the budget as successfully set
}

// Function: Retrieves the user's current budget.
float User::getUserBudget() const {
    return budget;
}

// Function: Checks if the user's budget has been set.
// Returns true if the budget is set, otherwise false.
bool User::hasBudgetSet() const {
    return isBudgetSet;
}
