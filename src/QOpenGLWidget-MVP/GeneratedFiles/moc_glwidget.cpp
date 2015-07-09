/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLWidget_t {
    QByteArrayData data[30];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLWidget_t, stringdata0) + ofs \
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
QT_MOC_LITERAL(8, 84, 13), // "sliderChanged"
QT_MOC_LITERAL(9, 98, 1), // "t"
QT_MOC_LITERAL(10, 100, 12), // "setXRotation"
QT_MOC_LITERAL(11, 113, 12), // "setYRotation"
QT_MOC_LITERAL(12, 126, 12), // "setZRotation"
QT_MOC_LITERAL(13, 139, 7), // "setPosX"
QT_MOC_LITERAL(14, 147, 1), // "x"
QT_MOC_LITERAL(15, 149, 7), // "setPosY"
QT_MOC_LITERAL(16, 157, 1), // "y"
QT_MOC_LITERAL(17, 159, 7), // "setPosZ"
QT_MOC_LITERAL(18, 167, 1), // "z"
QT_MOC_LITERAL(19, 169, 10), // "setRotateX"
QT_MOC_LITERAL(20, 180, 10), // "setRotateY"
QT_MOC_LITERAL(21, 191, 10), // "setRotateZ"
QT_MOC_LITERAL(22, 202, 9), // "setScaleX"
QT_MOC_LITERAL(23, 212, 9), // "setScaleY"
QT_MOC_LITERAL(24, 222, 9), // "setScaleZ"
QT_MOC_LITERAL(25, 232, 10), // "setCameraX"
QT_MOC_LITERAL(26, 243, 10), // "setCameraY"
QT_MOC_LITERAL(27, 254, 10), // "setCameraZ"
QT_MOC_LITERAL(28, 265, 7), // "cleanup"
QT_MOC_LITERAL(29, 273, 6) // "slider"

    },
    "GLWidget\0xRotationChanged\0\0angle\0"
    "yRotationChanged\0zRotationChanged\0"
    "zoomChanged\0zoom\0sliderChanged\0t\0"
    "setXRotation\0setYRotation\0setZRotation\0"
    "setPosX\0x\0setPosY\0y\0setPosZ\0z\0setRotateX\0"
    "setRotateY\0setRotateZ\0setScaleX\0"
    "setScaleY\0setScaleZ\0setCameraX\0"
    "setCameraY\0setCameraZ\0cleanup\0slider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    1,  127,    2, 0x06 /* Public */,
       5,    1,  130,    2, 0x06 /* Public */,
       6,    1,  133,    2, 0x06 /* Public */,
       8,    1,  136,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  139,    2, 0x0a /* Public */,
      11,    1,  142,    2, 0x0a /* Public */,
      12,    1,  145,    2, 0x0a /* Public */,
      13,    1,  148,    2, 0x0a /* Public */,
      15,    1,  151,    2, 0x0a /* Public */,
      17,    1,  154,    2, 0x0a /* Public */,
      19,    1,  157,    2, 0x0a /* Public */,
      20,    1,  160,    2, 0x0a /* Public */,
      21,    1,  163,    2, 0x0a /* Public */,
      22,    1,  166,    2, 0x0a /* Public */,
      23,    1,  169,    2, 0x0a /* Public */,
      24,    1,  172,    2, 0x0a /* Public */,
      25,    1,  175,    2, 0x0a /* Public */,
      26,    1,  178,    2, 0x0a /* Public */,
      27,    1,  181,    2, 0x0a /* Public */,
      28,    0,  184,    2, 0x0a /* Public */,
      29,    1,  185,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Double,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLWidget *_t = static_cast<GLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->yRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->zRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->zoomChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->sliderChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        case 21: _t->slider((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        {
            typedef void (GLWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::sliderChanged)) {
                *result = 4;
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
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget.stringdata0))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(const_cast< GLWidget*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
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

// SIGNAL 4
void GLWidget::sliderChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
