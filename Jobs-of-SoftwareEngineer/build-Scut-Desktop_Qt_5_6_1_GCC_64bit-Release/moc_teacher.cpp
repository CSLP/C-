/****************************************************************************
** Meta object code from reading C++ file 'teacher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Scut/teacher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Teacher_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Teacher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Teacher_t qt_meta_stringdata_Teacher = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Teacher"
QT_MOC_LITERAL(1, 8, 6), // "sclose"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 11), // "corListInfo"
QT_MOC_LITERAL(4, 28, 6), // "string"
QT_MOC_LITERAL(5, 35, 7), // "display"
QT_MOC_LITERAL(6, 43, 10), // "completUpd"
QT_MOC_LITERAL(7, 54, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 78, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(9, 102, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 124, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 148, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 172, 23) // "on_pushButton_6_clicked"

    },
    "Teacher\0sclose\0\0corListInfo\0string\0"
    "display\0completUpd\0on_pushButton_3_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Teacher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   65,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       6,    1,   73,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Teacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Teacher *_t = static_cast<Teacher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sclose(); break;
        case 1: _t->corListInfo((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 2: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->completUpd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Teacher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Teacher::sclose)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Teacher::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Teacher.data,
      qt_meta_data_Teacher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Teacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Teacher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Teacher.stringdata0))
        return static_cast<void*>(const_cast< Teacher*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Teacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Teacher::sclose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
