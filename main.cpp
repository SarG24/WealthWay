#include "mainwindow.h"
#include <QApplication> // Required for QT application

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Create QT application object
    MainWindow w;              // Create an instance of MainWindow
    w.show();                  // Display the MainWindow

    return a.exec();           // Enter the event loop
}
