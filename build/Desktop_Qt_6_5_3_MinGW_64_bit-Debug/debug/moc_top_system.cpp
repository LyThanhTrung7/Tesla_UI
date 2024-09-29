/****************************************************************************
** Meta object code from reading C++ file 'top_system.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../controllers/top_system.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'top_system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASStop_systemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASStop_systemENDCLASS = QtMocHelpers::stringData(
    "top_system",
    "outDoorTempChanged",
    "",
    "userNameChanged",
    "carLockedChanged",
    "currentTimeChanged",
    "setCarLocked",
    "newCarLocked",
    "setCurrentTime",
    "newCurrentTime",
    "current_timer_timeout",
    "setuserName",
    "newUserName",
    "setoutDoorTemp",
    "newOutDoorTemp",
    "carLocked",
    "outDoorTemp",
    "userName",
    "currentTime"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASStop_systemENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[17];
    char stringdata5[19];
    char stringdata6[13];
    char stringdata7[13];
    char stringdata8[15];
    char stringdata9[15];
    char stringdata10[22];
    char stringdata11[12];
    char stringdata12[12];
    char stringdata13[15];
    char stringdata14[15];
    char stringdata15[10];
    char stringdata16[12];
    char stringdata17[9];
    char stringdata18[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASStop_systemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASStop_systemENDCLASS_t qt_meta_stringdata_CLASStop_systemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "top_system"
        QT_MOC_LITERAL(11, 18),  // "outDoorTempChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 15),  // "userNameChanged"
        QT_MOC_LITERAL(47, 16),  // "carLockedChanged"
        QT_MOC_LITERAL(64, 18),  // "currentTimeChanged"
        QT_MOC_LITERAL(83, 12),  // "setCarLocked"
        QT_MOC_LITERAL(96, 12),  // "newCarLocked"
        QT_MOC_LITERAL(109, 14),  // "setCurrentTime"
        QT_MOC_LITERAL(124, 14),  // "newCurrentTime"
        QT_MOC_LITERAL(139, 21),  // "current_timer_timeout"
        QT_MOC_LITERAL(161, 11),  // "setuserName"
        QT_MOC_LITERAL(173, 11),  // "newUserName"
        QT_MOC_LITERAL(185, 14),  // "setoutDoorTemp"
        QT_MOC_LITERAL(200, 14),  // "newOutDoorTemp"
        QT_MOC_LITERAL(215, 9),  // "carLocked"
        QT_MOC_LITERAL(225, 11),  // "outDoorTemp"
        QT_MOC_LITERAL(237, 8),  // "userName"
        QT_MOC_LITERAL(246, 11)   // "currentTime"
    },
    "top_system",
    "outDoorTempChanged",
    "",
    "userNameChanged",
    "carLockedChanged",
    "currentTimeChanged",
    "setCarLocked",
    "newCarLocked",
    "setCurrentTime",
    "newCurrentTime",
    "current_timer_timeout",
    "setuserName",
    "newUserName",
    "setoutDoorTemp",
    "newOutDoorTemp",
    "carLocked",
    "outDoorTemp",
    "userName",
    "currentTime"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASStop_systemENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   85, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    5 /* Public */,
       3,    0,   69,    2, 0x06,    6 /* Public */,
       4,    0,   70,    2, 0x06,    7 /* Public */,
       5,    0,   71,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   72,    2, 0x0a,    9 /* Public */,
       8,    1,   75,    2, 0x0a,   11 /* Public */,
      10,    0,   78,    2, 0x0a,   13 /* Public */,
      11,    1,   79,    2, 0x0a,   14 /* Public */,
      13,    1,   82,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00015903, uint(2), 0,
      16, QMetaType::Int, 0x00015803, uint(0), 0,
      17, QMetaType::QString, 0x00015803, uint(1), 0,
      18, QMetaType::QString, 0x00015903, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject top_system::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASStop_systemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASStop_systemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASStop_systemENDCLASS_t,
        // property 'carLocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'outDoorTemp'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'userName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<top_system, std::true_type>,
        // method 'outDoorTempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'carLockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCarLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'current_timer_timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setuserName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setoutDoorTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void top_system::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<top_system *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->outDoorTempChanged(); break;
        case 1: _t->userNameChanged(); break;
        case 2: _t->carLockedChanged(); break;
        case 3: _t->currentTimeChanged(); break;
        case 4: _t->setCarLocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setCurrentTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->current_timer_timeout(); break;
        case 7: _t->setuserName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setoutDoorTemp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (top_system::*)();
            if (_t _q_method = &top_system::outDoorTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (top_system::*)();
            if (_t _q_method = &top_system::userNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (top_system::*)();
            if (_t _q_method = &top_system::carLockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (top_system::*)();
            if (_t _q_method = &top_system::currentTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<top_system *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->carLocked(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->outDoorTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<top_system *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setoutDoorTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setuserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentTime(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *top_system::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *top_system::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASStop_systemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int top_system::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void top_system::outDoorTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void top_system::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void top_system::carLockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void top_system::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
