/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_actionnew_record_triggered"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(4, 65, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(5, 89, 25), // "on_actionUpload_triggered"
QT_MOC_LITERAL(6, 115, 31), // "on_actionTemplateOpen_triggered"
QT_MOC_LITERAL(7, 147, 31), // "on_actionTemplateSave_triggered"
QT_MOC_LITERAL(8, 179, 30), // "on_actionTemplateNew_triggered"
QT_MOC_LITERAL(9, 210, 23), // "on_actionCase_triggered"
QT_MOC_LITERAL(10, 234, 10), // "remove_tab"
QT_MOC_LITERAL(11, 245, 17), // "OnTreeContextMenu"
QT_MOC_LITERAL(12, 263, 2), // "pt"
QT_MOC_LITERAL(13, 266, 8), // "showcase"
QT_MOC_LITERAL(14, 275, 11), // "receiveData"
QT_MOC_LITERAL(15, 287, 6), // "number"
QT_MOC_LITERAL(16, 294, 4), // "name"
QT_MOC_LITERAL(17, 299, 3), // "sex"
QT_MOC_LITERAL(18, 303, 2), // "ID"
QT_MOC_LITERAL(19, 306, 29), // "on_actionAddPatient_triggered"
QT_MOC_LITERAL(20, 336, 9) // "qtimeSlot"

    },
    "MainWindow\0on_actionnew_record_triggered\0"
    "\0on_actionNew_triggered\0on_actionSave_triggered\0"
    "on_actionUpload_triggered\0"
    "on_actionTemplateOpen_triggered\0"
    "on_actionTemplateSave_triggered\0"
    "on_actionTemplateNew_triggered\0"
    "on_actionCase_triggered\0remove_tab\0"
    "OnTreeContextMenu\0pt\0showcase\0receiveData\0"
    "number\0name\0sex\0ID\0on_actionAddPatient_triggered\0"
    "qtimeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    4,   97,    2, 0x08 /* Private */,
      19,    0,  106,    2, 0x08 /* Private */,
      20,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QPoint,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   15,   16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionnew_record_triggered(); break;
        case 1: _t->on_actionNew_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionUpload_triggered(); break;
        case 4: _t->on_actionTemplateOpen_triggered(); break;
        case 5: _t->on_actionTemplateSave_triggered(); break;
        case 6: _t->on_actionTemplateNew_triggered(); break;
        case 7: _t->on_actionCase_triggered(); break;
        case 8: _t->remove_tab(); break;
        case 9: { int _r = _t->OnTreeContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->showcase(); break;
        case 11: _t->receiveData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 12: _t->on_actionAddPatient_triggered(); break;
        case 13: _t->qtimeSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
