/****************************************************************************
** Meta object code from reading C++ file 'laubaslerusbcamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../laubaslerusbcamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'laubaslerusbcamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LAUBaslerUSBCamera_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LAUBaslerUSBCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LAUBaslerUSBCamera_t qt_meta_stringdata_LAUBaslerUSBCamera = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LAUBaslerUSBCamera"
QT_MOC_LITERAL(1, 19, 9), // "emitError"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "emitFrame"
QT_MOC_LITERAL(4, 40, 15), // "LAUMemoryObject"
QT_MOC_LITERAL(5, 56, 11), // "setExposure"
QT_MOC_LITERAL(6, 68, 12), // "microseconds"
QT_MOC_LITERAL(7, 81, 8), // "setFrame"
QT_MOC_LITERAL(8, 90, 6) // "buffer"

    },
    "LAUBaslerUSBCamera\0emitError\0\0emitFrame\0"
    "LAUMemoryObject\0setExposure\0microseconds\0"
    "setFrame\0buffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LAUBaslerUSBCamera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 4,    8,

       0        // eod
};

void LAUBaslerUSBCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LAUBaslerUSBCamera *_t = static_cast<LAUBaslerUSBCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->emitFrame((*reinterpret_cast< LAUMemoryObject(*)>(_a[1]))); break;
        case 2: _t->setExposure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFrame((*reinterpret_cast< LAUMemoryObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LAUMemoryObject >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LAUMemoryObject >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LAUBaslerUSBCamera::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LAUBaslerUSBCamera::emitError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LAUBaslerUSBCamera::*)(LAUMemoryObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LAUBaslerUSBCamera::emitFrame)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LAUBaslerUSBCamera::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LAUBaslerUSBCamera.data,
      qt_meta_data_LAUBaslerUSBCamera,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LAUBaslerUSBCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LAUBaslerUSBCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LAUBaslerUSBCamera.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LAUBaslerUSBCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LAUBaslerUSBCamera::emitError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LAUBaslerUSBCamera::emitFrame(LAUMemoryObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
