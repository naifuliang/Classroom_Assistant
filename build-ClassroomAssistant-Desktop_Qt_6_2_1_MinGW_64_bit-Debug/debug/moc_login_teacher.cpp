/****************************************************************************
** Meta object code from reading C++ file 'login_teacher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Classroom_Assistant/login_teacher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_teacher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Login_teacher_t {
    const uint offsetsAndSize[18];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Login_teacher_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Login_teacher_t qt_meta_stringdata_Login_teacher = {
    {
QT_MOC_LITERAL(0, 13), // "Login_teacher"
QT_MOC_LITERAL(14, 6), // "log_in"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 14), // "log_in_succeed"
QT_MOC_LITERAL(37, 8), // "username"
QT_MOC_LITERAL(46, 13), // "log_in_failed"
QT_MOC_LITERAL(60, 8), // "Register"
QT_MOC_LITERAL(69, 11), // "log_in_slot"
QT_MOC_LITERAL(81, 13) // "Register_slot"

    },
    "Login_teacher\0log_in\0\0log_in_succeed\0"
    "username\0log_in_failed\0Register\0"
    "log_in_slot\0Register_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login_teacher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    1,   51,    2, 0x06,    2 /* Public */,
       5,    0,   54,    2, 0x06,    4 /* Public */,
       6,    0,   55,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   56,    2, 0x0a,    6 /* Public */,
       8,    0,   57,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Login_teacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Login_teacher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->log_in(); break;
        case 1: _t->log_in_succeed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->log_in_failed(); break;
        case 3: _t->Register(); break;
        case 4: _t->log_in_slot(); break;
        case 5: _t->Register_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Login_teacher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_teacher::log_in)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Login_teacher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_teacher::log_in_succeed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Login_teacher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_teacher::log_in_failed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Login_teacher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_teacher::Register)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Login_teacher::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Login_teacher.offsetsAndSize,
    qt_meta_data_Login_teacher,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Login_teacher_t
, QtPrivate::TypeAndForceComplete<Login_teacher, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Login_teacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login_teacher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Login_teacher.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Login_teacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Login_teacher::log_in()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Login_teacher::log_in_succeed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Login_teacher::log_in_failed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Login_teacher::Register()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
