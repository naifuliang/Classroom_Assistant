/****************************************************************************
** Meta object code from reading C++ file 'insertpaper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Classroom_Assistant/insertpaper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insertpaper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InsertPaper_t {
    const uint offsetsAndSize[12];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InsertPaper_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InsertPaper_t qt_meta_stringdata_InsertPaper = {
    {
QT_MOC_LITERAL(0, 11), // "InsertPaper"
QT_MOC_LITERAL(12, 17), // "InsertPaperClosed"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 15), // "InsertPaperDone"
QT_MOC_LITERAL(47, 9), // "PaperInfo"
QT_MOC_LITERAL(57, 21) // "on_DoneButton_clicked"

    },
    "InsertPaper\0InsertPaperClosed\0\0"
    "InsertPaperDone\0PaperInfo\0"
    "on_DoneButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InsertPaper[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    1,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonArray,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void InsertPaper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InsertPaper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->InsertPaperClosed(); break;
        case 1: _t->InsertPaperDone((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 2: _t->on_DoneButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InsertPaper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertPaper::InsertPaperClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InsertPaper::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertPaper::InsertPaperDone)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject InsertPaper::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_InsertPaper.offsetsAndSize,
    qt_meta_data_InsertPaper,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_InsertPaper_t
, QtPrivate::TypeAndForceComplete<InsertPaper, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *InsertPaper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InsertPaper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InsertPaper.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InsertPaper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void InsertPaper::InsertPaperClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InsertPaper::InsertPaperDone(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
