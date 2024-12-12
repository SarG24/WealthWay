#include "summary_report.h"
#include <iomanip>
#include <sstream>
#include <map>
#include <string>

SummaryReport::SummaryReport(const std::vector<Expense>& expenses)
    : expenses(expenses) {}

std::string SummaryReport::generate() const {
    std::ostringstream report;
    report << "==================== Summary Report ====================\n\n";

    float totalSpent = 0.0f;
    std::map<std::string, float> categoryTotals;

    // Calculate totals
    for (const auto& expense : expenses) {
        totalSpent += expense.getAmount();
        categoryTotals[expense.getCategory()] += expense.getAmount();
    }

    // Total summary
    report << "Total Spent: $" << std::fixed << std::setprecision(2) << totalSpent << "\n\n";

    // Headers for category breakdown
    report << "Category Breakdown:\n";
    report << std::setw(25) << std::left << "Category"
           << std::setw(20) << "Amount ($)"
           << std::setw(20) << "Percentage (%)"
           << "\n";
    report << "-------------------------------------------------------------\n";

    // Detailed category breakdown
    for (const auto& [category, amount] : categoryTotals) {
        float percentage = (amount / totalSpent) * 100;
        report << std::setw(25) << std::left << category
               << std::setw(20) << std::fixed << std::setprecision(2) << amount
               << std::setw(20) << percentage
               << "\n";
    }

    // Add a note at the end
    report << "\n=============================================================\n";
    report << "Tip: Analyze your highest spending categories to manage your budget better!\n";

    return report.str();
}
