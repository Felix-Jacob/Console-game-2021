/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Player_t {
    const uint offsetsAndSize[70];
    char stringdata0[457];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Player_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 6), // "Player"
QT_MOC_LITERAL(7, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 6), // "output"
QT_MOC_LITERAL(34, 5), // "moved"
QT_MOC_LITERAL(40, 6), // "Field*"
QT_MOC_LITERAL(47, 8), // "newField"
QT_MOC_LITERAL(56, 11), // "lastFieldId"
QT_MOC_LITERAL(68, 13), // "pickedUpItems"
QT_MOC_LITERAL(82, 8), // "itemName"
QT_MOC_LITERAL(91, 10), // "Inventory*"
QT_MOC_LITERAL(102, 9), // "inventory"
QT_MOC_LITERAL(112, 12), // "droppedItems"
QT_MOC_LITERAL(125, 12), // "SetSavePoint"
QT_MOC_LITERAL(138, 10), // "FastTravel"
QT_MOC_LITERAL(149, 11), // "destination"
QT_MOC_LITERAL(161, 23), // "ListAvailableSavePoints"
QT_MOC_LITERAL(185, 4), // "Move"
QT_MOC_LITERAL(190, 9), // "direction"
QT_MOC_LITERAL(200, 16), // "PickUpItemOfType"
QT_MOC_LITERAL(217, 8), // "itemType"
QT_MOC_LITERAL(226, 25), // "PickUpMultipleItemsOfType"
QT_MOC_LITERAL(252, 13), // "numberOfItems"
QT_MOC_LITERAL(266, 20), // "PickUpAllItemsOfType"
QT_MOC_LITERAL(287, 14), // "DropItemOfType"
QT_MOC_LITERAL(302, 23), // "DropMultipleItemsOfType"
QT_MOC_LITERAL(326, 18), // "DropAllItemsOfType"
QT_MOC_LITERAL(345, 25), // "ListAvailableItemsOnField"
QT_MOC_LITERAL(371, 20), // "PrintItemDescription"
QT_MOC_LITERAL(392, 12), // "CombineItems"
QT_MOC_LITERAL(405, 5), // "items"
QT_MOC_LITERAL(411, 13), // "ListInventory"
QT_MOC_LITERAL(425, 19), // "GetFieldDescription"
QT_MOC_LITERAL(445, 7), // "UseItem"
QT_MOC_LITERAL(453, 3) // "Die"

    },
    "Player\0issueConsoleOutput\0\0output\0"
    "moved\0Field*\0newField\0lastFieldId\0"
    "pickedUpItems\0itemName\0Inventory*\0"
    "inventory\0droppedItems\0SetSavePoint\0"
    "FastTravel\0destination\0ListAvailableSavePoints\0"
    "Move\0direction\0PickUpItemOfType\0"
    "itemType\0PickUpMultipleItemsOfType\0"
    "numberOfItems\0PickUpAllItemsOfType\0"
    "DropItemOfType\0DropMultipleItemsOfType\0"
    "DropAllItemsOfType\0ListAvailableItemsOnField\0"
    "PrintItemDescription\0CombineItems\0"
    "items\0ListInventory\0GetFieldDescription\0"
    "UseItem\0Die"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x06,    0 /* Public */,
       4,    2,  143,    2, 0x06,    2 /* Public */,
       8,    2,  148,    2, 0x06,    5 /* Public */,
      12,    2,  153,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  158,    2, 0x0a,   11 /* Public */,
      14,    1,  159,    2, 0x0a,   12 /* Public */,
      16,    0,  162,    2, 0x0a,   14 /* Public */,
      17,    1,  163,    2, 0x0a,   15 /* Public */,
      19,    1,  166,    2, 0x0a,   17 /* Public */,
      21,    2,  169,    2, 0x0a,   19 /* Public */,
      23,    1,  174,    2, 0x0a,   22 /* Public */,
      24,    1,  177,    2, 0x0a,   24 /* Public */,
      25,    2,  180,    2, 0x0a,   26 /* Public */,
      26,    1,  185,    2, 0x0a,   29 /* Public */,
      27,    0,  188,    2, 0x0a,   31 /* Public */,
      28,    1,  189,    2, 0x0a,   32 /* Public */,
      29,    1,  192,    2, 0x0a,   34 /* Public */,
      31,    0,  195,    2, 0x0a,   36 /* Public */,
      32,    0,  196,    2, 0x0a,   37 /* Public */,
      33,    1,  197,    2, 0x0a,   38 /* Public */,
      34,    0,  200,    2, 0x0a,   40 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::QString, QMetaType::QString,   20,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   20,   22,
    QMetaType::QString, QMetaType::QString,   20,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   20,   22,
    QMetaType::QString, QMetaType::QString,   20,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->moved((*reinterpret_cast< Field*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->pickedUpItems((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Inventory*(*)>(_a[2]))); break;
        case 3: _t->droppedItems((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Inventory*(*)>(_a[2]))); break;
        case 4: _t->SetSavePoint(); break;
        case 5: _t->FastTravel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->ListAvailableSavePoints(); break;
        case 7: _t->Move((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: { QString _r = _t->PickUpItemOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->PickUpMultipleItemsOfType((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->PickUpAllItemsOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->DropItemOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->DropMultipleItemsOfType((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->DropAllItemsOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->ListAvailableItemsOnField();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->PrintItemDescription((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->CombineItems((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->ListInventory(); break;
        case 18: _t->GetFieldDescription(); break;
        case 19: _t->UseItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->Die(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Player::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::issueConsoleOutput)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Player::*)(Field * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::moved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Player::*)(QString , Inventory * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::pickedUpItems)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Player::*)(QString , Inventory * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::droppedItems)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Player.offsetsAndSize,
    qt_meta_data_Player,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Player_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Field *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<Inventory *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<Inventory *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Player::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Player::moved(Field * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Player::pickedUpItems(QString _t1, Inventory * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Player::droppedItems(QString _t1, Inventory * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
