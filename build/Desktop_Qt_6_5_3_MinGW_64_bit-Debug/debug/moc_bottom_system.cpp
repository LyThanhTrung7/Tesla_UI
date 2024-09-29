/****************************************************************************
** Meta object code from reading C++ file 'bottom_system.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../controllers/bottom_system.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bottom_system.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbottom_systemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSbottom_systemENDCLASS = QtMocHelpers::stringData(
    "bottom_system",
    "tempValueChanged",
    "",
    "typeAirChanged",
    "audioValueChanged",
    "typeFanChanged",
    "setTempValue",
    "newTempValue",
    "setTypeAir",
    "newTypeAir",
    "setAudioValue",
    "newAudioValue",
    "setTypeFan",
    "newTypeFan",
    "tempValue",
    "typeAir",
    "typeFan",
    "audioValue"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSbottom_systemENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[14];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[15];
    char stringdata6[13];
    char stringdata7[13];
    char stringdata8[11];
    char stringdata9[11];
    char stringdata10[14];
    char stringdata11[14];
    char stringdata12[11];
    char stringdata13[11];
    char stringdata14[10];
    char stringdata15[8];
    char stringdata16[8];
    char stringdata17[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSbottom_systemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSbottom_systemENDCLASS_t qt_meta_stringdata_CLASSbottom_systemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "bottom_system"
        QT_MOC_LITERAL(14, 16),  // "tempValueChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 14),  // "typeAirChanged"
        QT_MOC_LITERAL(47, 17),  // "audioValueChanged"
        QT_MOC_LITERAL(65, 14),  // "typeFanChanged"
        QT_MOC_LITERAL(80, 12),  // "setTempValue"
        QT_MOC_LITERAL(93, 12),  // "newTempValue"
        QT_MOC_LITERAL(106, 10),  // "setTypeAir"
        QT_MOC_LITERAL(117, 10),  // "newTypeAir"
        QT_MOC_LITERAL(128, 13),  // "setAudioValue"
        QT_MOC_LITERAL(142, 13),  // "newAudioValue"
        QT_MOC_LITERAL(156, 10),  // "setTypeFan"
        QT_MOC_LITERAL(167, 10),  // "newTypeFan"
        QT_MOC_LITERAL(178, 9),  // "tempValue"
        QT_MOC_LITERAL(188, 7),  // "typeAir"
        QT_MOC_LITERAL(196, 7),  // "typeFan"
        QT_MOC_LITERAL(204, 10)   // "audioValue"
    },
    "bottom_system",
    "tempValueChanged",
    "",
    "typeAirChanged",
    "audioValueChanged",
    "typeFanChanged",
    "setTempValue",
    "newTempValue",
    "setTypeAir",
    "newTypeAir",
    "setAudioValue",
    "newAudioValue",
    "setTypeFan",
    "newTypeFan",
    "tempValue",
    "typeAir",
    "typeFan",
    "audioValue"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbottom_systemENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    5 /* Public */,
       3,    0,   63,    2, 0x06,    6 /* Public */,
       4,    0,   64,    2, 0x06,    7 /* Public */,
       5,    0,   65,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   66,    2, 0x0a,    9 /* Public */,
       8,    1,   69,    2, 0x0a,   11 /* Public */,
      10,    1,   72,    2, 0x0a,   13 /* Public */,
      12,    1,   75,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00015903, uint(0), 0,
      15, QMetaType::Bool, 0x00015903, uint(1), 0,
      16, QMetaType::Bool, 0x00015903, uint(3), 0,
      17, QMetaType::Int, 0x00015903, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bottom_system::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSbottom_systemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbottom_systemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbottom_systemENDCLASS_t,
        // property 'tempValue'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'typeAir'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'typeFan'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'audioValue'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<bottom_system, std::true_type>,
        // method 'tempValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'typeAirChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'audioValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'typeFanChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTempValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTypeAir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAudioValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTypeFan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void bottom_system::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bottom_system *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tempValueChanged(); break;
        case 1: _t->typeAirChanged(); break;
        case 2: _t->audioValueChanged(); break;
        case 3: _t->typeFanChanged(); break;
        case 4: _t->setTempValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setTypeAir((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setAudioValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setTypeFan((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (bottom_system::*)();
            if (_t _q_method = &bottom_system::tempValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (bottom_system::*)();
            if (_t _q_method = &bottom_system::typeAirChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (bottom_system::*)();
            if (_t _q_method = &bottom_system::audioValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (bottom_system::*)();
            if (_t _q_method = &bottom_system::typeFanChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<bottom_system *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->tempValue(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->typeAir(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->typeFan(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->audioValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<bottom_system *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTempValue(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTypeAir(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setTypeFan(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAudioValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *bottom_system::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bottom_system::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbottom_systemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int bottom_system::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void bottom_system::tempValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void bottom_system::typeAirChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void bottom_system::audioValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void bottom_system::typeFanChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
