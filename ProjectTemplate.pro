QT       += core gui charts


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    category.cpp \
    expense.cpp \
    graphical_report.cpp \
    main.cpp \
    main_manager.cpp \
    mainwindow.cpp \
    summary_report.cpp \
    user.cpp

HEADERS += \
    category.h \
    expense.h \
    graphical_report.h \
    main_manager.h \
    mainwindow.h \
    report.h \
    summary_report.h \
    user.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
