#ifndef SUMMARYREPORT_H
#define SUMMARYREPORT_H

#include "report.h"
#include "expense.h"
#include <vector>
#include <string>
#include <map>

// Generates textual summaries of expenses
class SummaryReport : public Report {
private:
    std::vector<Expense> expenses; // List of all expenses to summarize

public:
    // Constructor to initialize expenses
    SummaryReport(const std::vector<Expense>& expenses);

    // Implementation of the generate method
    std::string generate() const override;
};

#endif // SUMMARYREPORT_H
