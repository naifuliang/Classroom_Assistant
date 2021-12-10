/****************************************************************************
** Meta object code from reading C++ file 'register_teacher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Classroom_Assistant/register_teacher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register_teacher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Register_Teacher_t {
    const uint offsetsAndSize[12];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Register_Teacher_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Register_Teacher_t qt_meta_stringdata_Register_Teacher = {
    {
QT_MOC_LITERAL(0, 16), // "Register_Teacher"
QT_MOC_LITERAL(17, 8), // "Register"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 14), // "password_fault"
QT_MOC_LITERAL(42, 13), // "Register_slot"
QT_MOC_LITERAL(56, 19) // "password_fault_slot"

    },
    "Register_Teacher\0Register\0\0password_fault\0"
    "Register_slot\0password_fault_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register_Teacher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    0,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Register_Teacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Register_Teacher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Register(); break;
        case 1: _t->password_fault(); break;
        case 2: _t->Register_slot(); break;
        case 3: _t->password_fault_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Register_Teacher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Register_Teacher::Register)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Register_Teacher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Register_Teacher::password_fault)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject Register_Teacher::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Register_Teacher.offsetsAndSize,
    qt_meta_data_Register_Teacher,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Register_Teacher_t
, QtPrivate::TypeAndForceComplete<Register_Teacher, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Register_Teacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register_Teacher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Register_Teacher.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Register_Teacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Register_Teacher::Register()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Register_Teacher::password_fault()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
