/****************************************************************************
** Meta object code from reading C++ file 'View_VersionsverlaufDetailliert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../KTDVS/View_VersionsverlaufDetailliert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'View_VersionsverlaufDetailliert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_View_VersionsverlaufDetailliert_t {
    QByteArrayData data[8];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_View_VersionsverlaufDetailliert_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_View_VersionsverlaufDetailliert_t qt_meta_stringdata_View_VersionsverlaufDetailliert = {
    {
QT_MOC_LITERAL(0, 0, 31), // "View_VersionsverlaufDetailliert"
QT_MOC_LITERAL(1, 32, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 18), // "on_zurueck_clicked"
QT_MOC_LITERAL(4, 74, 35), // "on_lineEdit_1_cursorPositionC..."
QT_MOC_LITERAL(5, 110, 4), // "arg1"
QT_MOC_LITERAL(6, 115, 4), // "arg2"
QT_MOC_LITERAL(7, 120, 17) // "on_logout_clicked"

    },
    "View_VersionsverlaufDetailliert\0"
    "on_pushButton_clicked\0\0on_zurueck_clicked\0"
    "on_lineEdit_1_cursorPositionChanged\0"
    "arg1\0arg2\0on_logout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View_VersionsverlaufDetailliert[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    2,   36,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,

       0        // eod
};

void View_VersionsverlaufDetailliert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View_VersionsverlaufDetailliert *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_zurueck_clicked(); break;
        case 2: _t->on_lineEdit_1_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_logout_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject View_VersionsverlaufDetailliert::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_View_VersionsverlaufDetailliert.data,
    qt_meta_data_View_VersionsverlaufDetailliert,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *View_VersionsverlaufDetailliert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View_VersionsverlaufDetailliert::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_View_VersionsverlaufDetailliert.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int View_VersionsverlaufDetailliert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
