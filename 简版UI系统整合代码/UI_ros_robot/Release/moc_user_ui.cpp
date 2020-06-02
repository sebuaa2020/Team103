/****************************************************************************
** Meta object code from reading C++ file 'user_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../user_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_User_ui_t {
    QByteArrayData data[9];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_User_ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_User_ui_t qt_meta_stringdata_User_ui = {
    {
QT_MOC_LITERAL(0, 0, 7), // "User_ui"
QT_MOC_LITERAL(1, 8, 16), // "acceptedmain_usr"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 25), // "on_to_aimed_point_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_init_nav_clicked"
QT_MOC_LITERAL(5, 72, 21), // "on_command_do_clicked"
QT_MOC_LITERAL(6, 94, 23), // "on_news_weather_clicked"
QT_MOC_LITERAL(7, 118, 22), // "on_voice_input_clicked"
QT_MOC_LITERAL(8, 141, 22) // "on_grab_button_clicked"

    },
    "User_ui\0acceptedmain_usr\0\0"
    "on_to_aimed_point_clicked\0on_init_nav_clicked\0"
    "on_command_do_clicked\0on_news_weather_clicked\0"
    "on_voice_input_clicked\0on_grab_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_User_ui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void User_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        User_ui *_t = static_cast<User_ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptedmain_usr(); break;
        case 1: _t->on_to_aimed_point_clicked(); break;
        case 2: _t->on_init_nav_clicked(); break;
        case 3: _t->on_command_do_clicked(); break;
        case 4: _t->on_news_weather_clicked(); break;
        case 5: _t->on_voice_input_clicked(); break;
        case 6: _t->on_grab_button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject User_ui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_User_ui.data,
      qt_meta_data_User_ui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *User_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *User_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_User_ui.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int User_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
