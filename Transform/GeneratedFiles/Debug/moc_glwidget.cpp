/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../glwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLWidget_t {
    QByteArrayData data[28];
    char stringdata[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLWidget_t qt_meta_stringdata_GLWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GLWidget"
QT_MOC_LITERAL(1, 9, 16), // "xRotationChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "angle"
QT_MOC_LITERAL(4, 33, 16), // "yRotationChanged"
QT_MOC_LITERAL(5, 50, 16), // "zRotationChanged"
QT_MOC_LITERAL(6, 67, 11), // "zoomChanged"
QT_MOC_LITERAL(7, 79, 4), // "zoom"
QT_MOC_LITERAL(8, 84, 12), // "setXRotation"
QT_MOC_LITERAL(9, 97, 12), // "setYRotation"
QT_MOC_LITERAL(10, 110, 12), // "setZRotation"
QT_MOC_LITERAL(11, 123, 7), // "setZoom"
QT_MOC_LITERAL(12, 131, 7), // "setPosX"
QT_MOC_LITERAL(13, 139, 1), // "x"
QT_MOC_LITERAL(14, 141, 7), // "setPosY"
QT_MOC_LITERAL(15, 149, 1), // "y"
QT_MOC_LITERAL(16, 151, 7), // "setPosZ"
QT_MOC_LITERAL(17, 159, 1), // "z"
QT_MOC_LITERAL(18, 161, 10), // "setRotateX"
QT_MOC_LITERAL(19, 172, 10), // "setRotateY"
QT_MOC_LITERAL(20, 183, 10), // "setRotateZ"
QT_MOC_LITERAL(21, 194, 9), // "setScaleX"
QT_MOC_LITERAL(22, 204, 9), // "setScaleY"
QT_MOC_LITERAL(23, 214, 9), // "setScaleZ"
QT_MOC_LITERAL(24, 224, 10), // "setCameraX"
QT_MOC_LITERAL(25, 235, 10), // "setCameraY"
QT_MOC_LITERAL(26, 246, 10), // "setCameraZ"
QT_MOC_LITERAL(27, 257, 7) // "cleanup"

    },
    "GLWidget\0xRotationChanged\0\0angle\0"
    "yRotationChanged\0zRotationChanged\0"
    "zoomChanged\0zoom\0setXRotation\0"
    "setYRotation\0setZRotation\0setZoom\0"
    "setPosX\0x\0setPosY\0y\0setPosZ\0z\0setRotateX\0"
    "setRotateY\0setRotateZ\0setScaleX\0"
    "setScaleY\0setScaleZ\0setCameraX\0"
    "setCameraY\0setCameraZ\0cleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       5,    1,  125,    2, 0x06 /* Public */,
       6,    1,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  131,    2, 0x0a /* Public */,
       9,    1,  134,    2, 0x0a /* Public */,
      10,    1,  137,    2, 0x0a /* Public */,
      11,    1,  140,    2, 0x0a /* Public */,
      12,    1,  143,    2, 0x0a /* Public */,
      14,    1,  146,    2, 0x0a /* Public */,
      16,    1,  149,    2, 0x0a /* Public */,
      18,    1,  152,    2, 0x0a /* Public */,
      19,    1,  155,    2, 0x0a /* Public */,
      20,    1,  158,    2, 0x0a /* Public */,
      21,    1,  161,    2, 0x0a /* Public */,
      22,    1,  164,    2, 0x0a /* Public */,
      23,    1,  167,    2, 0x0a /* Public */,
      24,    1,  170,    2, 0x0a /* Public */,
      25,    1,  173,    2, 0x0a /* Public */,
      26,    1,  176,    2, 0x0a /* Public */,
      27,    0,  179,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void,

       0        // eod
};

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLWidget *_t = static_cast<GLWidget *>(_o);
        switch (_id) {
        case 0: _t->xRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->yRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->zRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->zoomChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setZoom((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setPosX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setPosY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setPosZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setRotateX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setRotateY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setRotateZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->setScaleX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setScaleY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setScaleZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->setCameraX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setCameraY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setCameraZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->cleanup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::xRotationChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::yRotationChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (GLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::zRotationChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (GLWidget::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::zoomChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject GLWidget::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget.data,
      qt_meta_data_GLWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget.stringdata))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions_4_3_Core"))
        return static_cast< QOpenGLFunctions_4_3_Core*>(const_cast< GLWidget*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::xRotationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLWidget::yRotationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLWidget::zRotationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GLWidget::zoomChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
