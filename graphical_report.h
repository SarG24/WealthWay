#ifndef GRAPHICALREPORT_H
#define GRAPHICALREPORT_H

#include "report.h"
#include "expense.h"
#include <vector>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>

// Represents a graphical report (pie chart) of expenses
class GraphicalReport : public Report {
private:
    std::vector<Expense> expenses; // List of expenses for the report

public:
    // Constructor to initialize with a list of expenses
    GraphicalReport(const std::vector<Expense>& expenses);

    // Textual description of the report (required by base class)
    std::string generate() const override;

    // Generates a pie chart visualizing expenses by category
    QChartView* generateChart() const;
};

#endif
