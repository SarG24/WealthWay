#ifndef REPORT_H
#define REPORT_H

#include <string>

// Abstract base class for generating reports
class Report {
public:
    // Virtual destructor for proper cleanup of derived classes
    virtual ~Report() {}

    // Pure virtual function to be implemented by subclasses
    virtual std::string generate() const = 0;
};

#endif // REPORT_H
