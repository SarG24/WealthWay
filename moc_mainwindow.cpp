/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_addExpenseButton_clicked",
    "",
    "on_loginButton_clicked",
    "on_removeExpenseButton_clicked",
    "on_viewExpenseButton_clicked",
    "on_backToManagerButton_clicked",
    "updateBudgetDisplay",
    "on_setBudgetButton_clicked",
    "highlightOverBudgetExpenses",
    "on_categoryComboBoxView_currentIndexChanged",
    "index",
    "on_filterPriceButton_clicked",
    "updateBudgetSummary",
    "on_hintButton_clicked",
    "on_generateSummaryReportButton_clicked",
    "on_generateGraphicalReportButton_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    0,  103,    2, 0x08,    6 /* Private */,
       8,    0,  104,    2, 0x08,    7 /* Private */,
       9,    0,  105,    2, 0x08,    8 /* Private */,
      10,    1,  106,    2, 0x08,    9 /* Private */,
      12,    0,  109,    2, 0x08,   11 /* Private */,
      13,    0,  110,    2, 0x08,   12 /* Private */,
      14,    0,  111,    2, 0x08,   13 /* Private */,
      15,    0,  112,    2, 0x08,   14 /* Private */,
      16,    0,  113,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_addExpenseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loginButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeExpenseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_viewExpenseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backToManagerButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBudgetDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setBudgetButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'highlightOverBudgetExpenses'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_categoryComboBoxView_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_filterPriceButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBudgetSummary'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hintButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_generateSummaryReportButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_generateGraphicalReportButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addExpenseButton_clicked(); break;
        case 1: _t->on_loginButton_clicked(); break;
        case 2: _t->on_removeExpenseButton_clicked(); break;
        case 3: _t->on_viewExpenseButton_clicked(); break;
        case 4: _t->on_backToManagerButton_clicked(); break;
        case 5: _t->updateBudgetDisplay(); break;
        case 6: _t->on_setBudgetButton_clicked(); break;
        case 7: _t->highlightOverBudgetExpenses(); break;
        case 8: _t->on_categoryComboBoxView_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_filterPriceButton_clicked(); break;
        case 10: _t->updateBudgetSummary(); break;
        case 11: _t->on_hintButton_clicked(); break;
        case 12: _t->on_generateSummaryReportButton_clicked(); break;
        case 13: _t->on_generateGraphicalReportButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
