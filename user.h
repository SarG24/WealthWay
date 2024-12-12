#ifndef USER_H
#define USER_H

#include <string>

// Represents a user of the system
// Each user has a username, password, and budget
class User {
private:
    std::string username;  // User's username
    std::string password;  // User's password
    float budget;          // User's budget
    bool isBudgetSet;      // Indicates if the budget has been set

public:
    // Constructor to initialize a user
    User(const std::string& username, const std::string& password, float budget);

    // Authenticates the user
    bool login(const std::string& username, const std::string& password) const;

    // Sets the user's budget
    void setUserBudget(float budget);

    // Gets the user's budget
    float getUserBudget() const;

    // Checks if the budget is set
    bool hasBudgetSet() const;
};

#endif // USER_H
