/****************************************************************************
** Meta object code from reading C++ file 'combineitemsstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/combineitemsstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'combineitemsstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CombineItemsState_t {
    const uint offsetsAndSize[18];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CombineItemsState_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CombineItemsState_t qt_meta_stringdata_CombineItemsState = {
    {
QT_MOC_LITERAL(0, 17), // "CombineItemsState"
QT_MOC_LITERAL(18, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 6), // "output"
QT_MOC_LITERAL(45, 20), // "listInventoryRequest"
QT_MOC_LITERAL(66, 19), // "combineItemsRequest"
QT_MOC_LITERAL(86, 5), // "items"
QT_MOC_LITERAL(92, 18), // "changeStateRequest"
QT_MOC_LITERAL(111, 8) // "newState"

    },
    "CombineItemsState\0issueConsoleOutput\0"
    "\0output\0listInventoryRequest\0"
    "combineItemsRequest\0items\0changeStateRequest\0"
    "newState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CombineItemsState[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    0 /* Public */,
       4,    0,   41,    2, 0x06,    2 /* Public */,
       5,    1,   42,    2, 0x06,    3 /* Public */,
       7,    1,   45,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void CombineItemsState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CombineItemsState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->listInventoryRequest(); break;
        case 2: _t->combineItemsRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->changeStateRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CombineItemsState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombineItemsState::issueConsoleOutput)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CombineItemsState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombineItemsState::listInventoryRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CombineItemsState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombineItemsState::combineItemsRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CombineItemsState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombineItemsState::changeStateRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CombineItemsState::staticMetaObject = { {
    QMetaObject::SuperData::link<IStates::staticMetaObject>(),
    qt_meta_stringdata_CombineItemsState.offsetsAndSize,
    qt_meta_data_CombineItemsState,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CombineItemsState_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *CombineItemsState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CombineItemsState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CombineItemsState.stringdata0))
        return static_cast<void*>(this);
    return IStates::qt_metacast(_clname);
}

int CombineItemsState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IStates::qt_metacall(_c, _id, _a);
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
void CombineItemsState::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CombineItemsState::listInventoryRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CombineItemsState::combineItemsRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CombineItemsState::changeStateRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
