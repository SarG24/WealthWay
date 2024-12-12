#include "graphical_report.h"
#include <QChart>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>

// Constructor: Initializes the GraphicalReport with a list of expenses
GraphicalReport::GraphicalReport(const std::vector<Expense>& expenses)
    : expenses(expenses) {}

// Generates a textual placeholder for the report (required by base class Report)
std::string GraphicalReport::generate() const {
    return "GraphicalReport outputs a graphical pie chart instead of a textual report.";
}

// Generates a pie chart visualizing expenses by category
QChartView* GraphicalReport::generateChart() const {
    QPieSeries* series = new QPieSeries(); // Pie chart series to hold the data

    // Variables for category totals and total spending
    std::map<std::string, float> categoryTotals;
    float totalSpent = 0.0f;

    // Calculate totals for each category and overall spending
    for (const auto& expense : expenses) {
        categoryTotals[expense.getCategory()] += expense.getAmount();
        totalSpent += expense.getAmount();
    }

    // Populate the pie series with category data and percentages
    for (const auto& [category, amount] : categoryTotals) {
        float percentage = (amount / totalSpent) * 100; // Calculate percentage

        // Add each slice to the pie series with custom label
        QPieSlice* slice = series->append(
            QString("%1: $%2 (%3%)") // Format: Category: $Amount (Percentage%)
                .arg(QString::fromStdString(category))
                .arg(QString::number(amount, 'f', 2)) // Two decimal places for amount
                .arg(QString::number(percentage, 'f', 1)), // One decimal place for percentage
            amount // The slice value
            );

        // Make the slice label visible and position it outside
        slice->setLabelVisible(true);
        slice->setLabelPosition(QPieSlice::LabelOutside);
    }

    // Create and configure the chart
    QChart* chart = new QChart();
    chart->addSeries(series); // Add the pie series to the chart
    chart->setTitle("Expense Distribution by Category"); // Chart title
    chart->legend()->setAlignment(Qt::AlignBottom); // Position the legend at the bottom

    // Create a chart view to display the chart with anti-aliasing for smooth rendering
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    return chartView; // Return the configured chart view
}
