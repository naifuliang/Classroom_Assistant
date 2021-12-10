/****************************************************************************
** Meta object code from reading C++ file 'login_student.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Classroom_Assistant/login_student.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_student.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Login_student_t {
    const uint offsetsAndSize[22];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Login_student_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Login_student_t qt_meta_stringdata_Login_student = {
    {
QT_MOC_LITERAL(0, 13), // "Login_student"
QT_MOC_LITERAL(14, 6), // "log_in"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 14), // "log_in_succeed"
QT_MOC_LITERAL(37, 2), // "ui"
QT_MOC_LITERAL(40, 3), // "pss"
QT_MOC_LITERAL(44, 3), // "nam"
QT_MOC_LITERAL(48, 13), // "log_in_failed"
QT_MOC_LITERAL(62, 8), // "Register"
QT_MOC_LITERAL(71, 11), // "log_in_slot"
QT_MOC_LITERAL(83, 13) // "Register_slot"

    },
    "Login_student\0log_in\0\0log_in_succeed\0"
    "ui\0pss\0nam\0log_in_failed\0Register\0"
    "log_in_slot\0Register_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login_student[] = {

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
       3,    3,   51,    2, 0x06,    2 /* Public */,
       7,    0,   58,    2, 0x06,    6 /* Public */,
       8,    0,   59,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   60,    2, 0x0a,    8 /* Public */,
      10,    0,   61,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Login_student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Login_student *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->log_in(); break;
        case 1: _t->log_in_succeed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->log_in_failed(); break;
        case 3: _t->Register(); break;
        case 4: _t->log_in_slot(); break;
        case 5: _t->Register_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Login_student::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_student::log_in)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Login_student::*)(int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_student::log_in_succeed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Login_student::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_student::log_in_failed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Login_student::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login_student::Register)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Login_student::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Login_student.offsetsAndSize,
    qt_meta_data_Login_student,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Login_student_t
, QtPrivate::TypeAndForceComplete<Login_student, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Login_student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login_student::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Login_student.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Login_student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Login_student::log_in()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Login_student::log_in_succeed(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Login_student::log_in_failed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Login_student::Register()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
