/****************************************************************************
** Meta object code from reading C++ file 'OSGNodeFile.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EarthWidget/OSGNodeFile.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OSGNodeFile.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgQtQuick__OSGNodeFile_t {
    QByteArrayData data[5];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgQtQuick__OSGNodeFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgQtQuick__OSGNodeFile_t qt_meta_stringdata_osgQtQuick__OSGNodeFile = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osgQtQuick::OSGNodeFile"
QT_MOC_LITERAL(1, 24, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "url"
QT_MOC_LITERAL(4, 43, 6) // "source"

    },
    "osgQtQuick::OSGNodeFile\0sourceChanged\0"
    "\0url\0source"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgQtQuick__OSGNodeFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // properties: name, type, flags
       4, QMetaType::QUrl, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osgQtQuick::OSGNodeFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OSGNodeFile *_t = static_cast<OSGNodeFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OSGNodeFile::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSGNodeFile::sourceChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OSGNodeFile *_t = static_cast<OSGNodeFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        OSGNodeFile *_t = static_cast<OSGNodeFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgQtQuick::OSGNodeFile::staticMetaObject = {
    { &OSGNode::staticMetaObject, qt_meta_stringdata_osgQtQuick__OSGNodeFile.data,
      qt_meta_data_osgQtQuick__OSGNodeFile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgQtQuick::OSGNodeFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgQtQuick::OSGNodeFile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgQtQuick__OSGNodeFile.stringdata0))
        return static_cast<void*>(const_cast< OSGNodeFile*>(this));
    return OSGNode::qt_metacast(_clname);
}

int osgQtQuick::OSGNodeFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OSGNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osgQtQuick::OSGNodeFile::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
