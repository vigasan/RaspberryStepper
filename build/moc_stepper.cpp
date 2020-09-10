/****************************************************************************
** Meta object code from reading C++ file 'stepper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stepper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stepper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Stepper_t {
    QByteArrayData data[86];
    char stringdata0[1070];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Stepper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Stepper_t qt_meta_stringdata_Stepper = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Stepper"
QT_MOC_LITERAL(1, 8, 15), // "positionChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "stepModeChanged"
QT_MOC_LITERAL(4, 41, 21), // "thresholdSpeedChanged"
QT_MOC_LITERAL(5, 63, 15), // "maxSpeedChanged"
QT_MOC_LITERAL(6, 79, 15), // "minSpeedChanged"
QT_MOC_LITERAL(7, 95, 19), // "accelerationChanged"
QT_MOC_LITERAL(8, 115, 19), // "decelerationChanged"
QT_MOC_LITERAL(9, 135, 15), // "kValHoldChanged"
QT_MOC_LITERAL(10, 151, 14), // "kValRunChanged"
QT_MOC_LITERAL(11, 166, 14), // "kValAccChanged"
QT_MOC_LITERAL(12, 181, 14), // "kValDecChanged"
QT_MOC_LITERAL(13, 196, 13), // "kThermChanged"
QT_MOC_LITERAL(14, 210, 19), // "ocdThresholdChanged"
QT_MOC_LITERAL(15, 230, 21), // "stallThresholdChanged"
QT_MOC_LITERAL(16, 252, 12), // "cmdCompleted"
QT_MOC_LITERAL(17, 265, 20), // "setDefaultParameters"
QT_MOC_LITERAL(18, 286, 14), // "sendParameters"
QT_MOC_LITERAL(19, 301, 16), // "updateParameters"
QT_MOC_LITERAL(20, 318, 14), // "saveParameters"
QT_MOC_LITERAL(21, 333, 5), // "clock"
QT_MOC_LITERAL(22, 339, 3), // "run"
QT_MOC_LITERAL(23, 343, 3), // "dir"
QT_MOC_LITERAL(24, 347, 5), // "speed"
QT_MOC_LITERAL(25, 353, 9), // "stepClock"
QT_MOC_LITERAL(26, 363, 8), // "softStop"
QT_MOC_LITERAL(27, 372, 8), // "hardStop"
QT_MOC_LITERAL(28, 381, 7), // "softHiZ"
QT_MOC_LITERAL(29, 389, 7), // "hardHiZ"
QT_MOC_LITERAL(30, 397, 4), // "move"
QT_MOC_LITERAL(31, 402, 4), // "step"
QT_MOC_LITERAL(32, 407, 4), // "goTo"
QT_MOC_LITERAL(33, 412, 8), // "position"
QT_MOC_LITERAL(34, 421, 7), // "goToDir"
QT_MOC_LITERAL(35, 429, 7), // "goUntil"
QT_MOC_LITERAL(36, 437, 3), // "act"
QT_MOC_LITERAL(37, 441, 9), // "releaseSW"
QT_MOC_LITERAL(38, 451, 6), // "goHome"
QT_MOC_LITERAL(39, 458, 6), // "goMark"
QT_MOC_LITERAL(40, 465, 13), // "resetPosition"
QT_MOC_LITERAL(41, 479, 11), // "resetDevice"
QT_MOC_LITERAL(42, 491, 17), // "setIntersectSpeed"
QT_MOC_LITERAL(43, 509, 13), // "setStartSlope"
QT_MOC_LITERAL(44, 523, 5), // "value"
QT_MOC_LITERAL(45, 529, 16), // "setAccFinalSlope"
QT_MOC_LITERAL(46, 546, 16), // "setDecFinalSlope"
QT_MOC_LITERAL(47, 563, 16), // "setConfiguration"
QT_MOC_LITERAL(48, 580, 15), // "setMarkPosition"
QT_MOC_LITERAL(49, 596, 14), // "setAbsPosition"
QT_MOC_LITERAL(50, 611, 14), // "getAbsPosition"
QT_MOC_LITERAL(51, 626, 16), // "getFullStepSpeed"
QT_MOC_LITERAL(52, 643, 11), // "getMaxSpeed"
QT_MOC_LITERAL(53, 655, 11), // "getMinSpeed"
QT_MOC_LITERAL(54, 667, 15), // "getAcceleration"
QT_MOC_LITERAL(55, 683, 15), // "getDeceleration"
QT_MOC_LITERAL(56, 699, 11), // "getKvalHold"
QT_MOC_LITERAL(57, 711, 10), // "getKvalRun"
QT_MOC_LITERAL(58, 722, 10), // "getKvalAcc"
QT_MOC_LITERAL(59, 733, 10), // "getKvalDec"
QT_MOC_LITERAL(60, 744, 11), // "getStepMode"
QT_MOC_LITERAL(61, 756, 9), // "getStatus"
QT_MOC_LITERAL(62, 766, 17), // "getIntersectSpeed"
QT_MOC_LITERAL(63, 784, 13), // "getStartSlope"
QT_MOC_LITERAL(64, 798, 16), // "getAccFinalSlope"
QT_MOC_LITERAL(65, 815, 16), // "getDecFinalSlope"
QT_MOC_LITERAL(66, 832, 9), // "getKTherm"
QT_MOC_LITERAL(67, 842, 15), // "getOCDThreshold"
QT_MOC_LITERAL(68, 858, 17), // "getStallThreshold"
QT_MOC_LITERAL(69, 876, 16), // "getConfiguration"
QT_MOC_LITERAL(70, 893, 15), // "getMarkPosition"
QT_MOC_LITERAL(71, 909, 15), // "getCurrentSpeed"
QT_MOC_LITERAL(72, 925, 8), // "Position"
QT_MOC_LITERAL(73, 934, 8), // "StepMode"
QT_MOC_LITERAL(74, 943, 14), // "ThresholdSpeed"
QT_MOC_LITERAL(75, 958, 8), // "MaxSpeed"
QT_MOC_LITERAL(76, 967, 8), // "MinSpeed"
QT_MOC_LITERAL(77, 976, 12), // "Acceleration"
QT_MOC_LITERAL(78, 989, 12), // "Deceleration"
QT_MOC_LITERAL(79, 1002, 8), // "KValHold"
QT_MOC_LITERAL(80, 1011, 7), // "KValRun"
QT_MOC_LITERAL(81, 1019, 7), // "KValAcc"
QT_MOC_LITERAL(82, 1027, 7), // "KValDec"
QT_MOC_LITERAL(83, 1035, 6), // "KTherm"
QT_MOC_LITERAL(84, 1042, 12), // "OcdThreshold"
QT_MOC_LITERAL(85, 1055, 14) // "StallThreshold"

    },
    "Stepper\0positionChanged\0\0stepModeChanged\0"
    "thresholdSpeedChanged\0maxSpeedChanged\0"
    "minSpeedChanged\0accelerationChanged\0"
    "decelerationChanged\0kValHoldChanged\0"
    "kValRunChanged\0kValAccChanged\0"
    "kValDecChanged\0kThermChanged\0"
    "ocdThresholdChanged\0stallThresholdChanged\0"
    "cmdCompleted\0setDefaultParameters\0"
    "sendParameters\0updateParameters\0"
    "saveParameters\0clock\0run\0dir\0speed\0"
    "stepClock\0softStop\0hardStop\0softHiZ\0"
    "hardHiZ\0move\0step\0goTo\0position\0goToDir\0"
    "goUntil\0act\0releaseSW\0goHome\0goMark\0"
    "resetPosition\0resetDevice\0setIntersectSpeed\0"
    "setStartSlope\0value\0setAccFinalSlope\0"
    "setDecFinalSlope\0setConfiguration\0"
    "setMarkPosition\0setAbsPosition\0"
    "getAbsPosition\0getFullStepSpeed\0"
    "getMaxSpeed\0getMinSpeed\0getAcceleration\0"
    "getDeceleration\0getKvalHold\0getKvalRun\0"
    "getKvalAcc\0getKvalDec\0getStepMode\0"
    "getStatus\0getIntersectSpeed\0getStartSlope\0"
    "getAccFinalSlope\0getDecFinalSlope\0"
    "getKTherm\0getOCDThreshold\0getStallThreshold\0"
    "getConfiguration\0getMarkPosition\0"
    "getCurrentSpeed\0Position\0StepMode\0"
    "ThresholdSpeed\0MaxSpeed\0MinSpeed\0"
    "Acceleration\0Deceleration\0KValHold\0"
    "KValRun\0KValAcc\0KValDec\0KTherm\0"
    "OcdThreshold\0StallThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stepper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
      14,  438, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x06 /* Public */,
       3,    0,  335,    2, 0x06 /* Public */,
       4,    0,  336,    2, 0x06 /* Public */,
       5,    0,  337,    2, 0x06 /* Public */,
       6,    0,  338,    2, 0x06 /* Public */,
       7,    0,  339,    2, 0x06 /* Public */,
       8,    0,  340,    2, 0x06 /* Public */,
       9,    0,  341,    2, 0x06 /* Public */,
      10,    0,  342,    2, 0x06 /* Public */,
      11,    0,  343,    2, 0x06 /* Public */,
      12,    0,  344,    2, 0x06 /* Public */,
      13,    0,  345,    2, 0x06 /* Public */,
      14,    0,  346,    2, 0x06 /* Public */,
      15,    0,  347,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  348,    2, 0x0a /* Public */,
      17,    0,  349,    2, 0x0a /* Public */,
      18,    0,  350,    2, 0x0a /* Public */,
      19,    0,  351,    2, 0x0a /* Public */,
      20,    0,  352,    2, 0x0a /* Public */,
      21,    0,  353,    2, 0x0a /* Public */,
      22,    2,  354,    2, 0x0a /* Public */,
      25,    1,  359,    2, 0x0a /* Public */,
      26,    0,  362,    2, 0x0a /* Public */,
      27,    0,  363,    2, 0x0a /* Public */,
      28,    0,  364,    2, 0x0a /* Public */,
      29,    0,  365,    2, 0x0a /* Public */,
      30,    2,  366,    2, 0x0a /* Public */,
      32,    1,  371,    2, 0x0a /* Public */,
      34,    2,  374,    2, 0x0a /* Public */,
      35,    3,  379,    2, 0x0a /* Public */,
      37,    2,  386,    2, 0x0a /* Public */,
      38,    0,  391,    2, 0x0a /* Public */,
      39,    0,  392,    2, 0x0a /* Public */,
      40,    0,  393,    2, 0x0a /* Public */,
      41,    0,  394,    2, 0x0a /* Public */,
      42,    1,  395,    2, 0x0a /* Public */,
      43,    1,  398,    2, 0x0a /* Public */,
      45,    1,  401,    2, 0x0a /* Public */,
      46,    1,  404,    2, 0x0a /* Public */,
      47,    1,  407,    2, 0x0a /* Public */,
      48,    1,  410,    2, 0x0a /* Public */,
      49,    1,  413,    2, 0x0a /* Public */,
      50,    0,  416,    2, 0x0a /* Public */,
      51,    0,  417,    2, 0x0a /* Public */,
      52,    0,  418,    2, 0x0a /* Public */,
      53,    0,  419,    2, 0x0a /* Public */,
      54,    0,  420,    2, 0x0a /* Public */,
      55,    0,  421,    2, 0x0a /* Public */,
      56,    0,  422,    2, 0x0a /* Public */,
      57,    0,  423,    2, 0x0a /* Public */,
      58,    0,  424,    2, 0x0a /* Public */,
      59,    0,  425,    2, 0x0a /* Public */,
      60,    0,  426,    2, 0x0a /* Public */,
      61,    0,  427,    2, 0x0a /* Public */,
      62,    0,  428,    2, 0x0a /* Public */,
      63,    0,  429,    2, 0x0a /* Public */,
      64,    0,  430,    2, 0x0a /* Public */,
      65,    0,  431,    2, 0x0a /* Public */,
      66,    0,  432,    2, 0x0a /* Public */,
      67,    0,  433,    2, 0x0a /* Public */,
      68,    0,  434,    2, 0x0a /* Public */,
      69,    0,  435,    2, 0x0a /* Public */,
      70,    0,  436,    2, 0x0a /* Public */,
      71,    0,  437,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UInt,   23,   24,
    QMetaType::Void, QMetaType::UChar,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UInt,   23,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::UChar, QMetaType::Int,   23,   33,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UInt,   36,   23,   24,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   36,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort,   24,
    QMetaType::Void, QMetaType::UChar,   44,
    QMetaType::Void, QMetaType::UChar,   44,
    QMetaType::Void, QMetaType::UChar,   44,
    QMetaType::Void, QMetaType::UShort,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Int,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
      72, QMetaType::Int, 0x00495103,
      73, QMetaType::UChar, 0x00495103,
      74, QMetaType::UShort, 0x00495003,
      75, QMetaType::UShort, 0x00495103,
      76, QMetaType::UShort, 0x00495103,
      77, QMetaType::UShort, 0x00495103,
      78, QMetaType::UShort, 0x00495103,
      79, QMetaType::UChar, 0x00495003,
      80, QMetaType::UChar, 0x00495003,
      81, QMetaType::UChar, 0x00495003,
      82, QMetaType::UChar, 0x00495003,
      83, QMetaType::UChar, 0x00495103,
      84, QMetaType::UChar, 0x00495003,
      85, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,

       0        // eod
};

void Stepper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Stepper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->stepModeChanged(); break;
        case 2: _t->thresholdSpeedChanged(); break;
        case 3: _t->maxSpeedChanged(); break;
        case 4: _t->minSpeedChanged(); break;
        case 5: _t->accelerationChanged(); break;
        case 6: _t->decelerationChanged(); break;
        case 7: _t->kValHoldChanged(); break;
        case 8: _t->kValRunChanged(); break;
        case 9: _t->kValAccChanged(); break;
        case 10: _t->kValDecChanged(); break;
        case 11: _t->kThermChanged(); break;
        case 12: _t->ocdThresholdChanged(); break;
        case 13: _t->stallThresholdChanged(); break;
        case 14: _t->cmdCompleted(); break;
        case 15: _t->setDefaultParameters(); break;
        case 16: _t->sendParameters(); break;
        case 17: _t->updateParameters(); break;
        case 18: _t->saveParameters(); break;
        case 19: _t->clock(); break;
        case 20: _t->run((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 21: _t->stepClock((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->softStop(); break;
        case 23: _t->hardStop(); break;
        case 24: _t->softHiZ(); break;
        case 25: _t->hardHiZ(); break;
        case 26: _t->move((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 27: _t->goTo((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 28: _t->goToDir((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 29: _t->goUntil((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 30: _t->releaseSW((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 31: _t->goHome(); break;
        case 32: _t->goMark(); break;
        case 33: _t->resetPosition(); break;
        case 34: _t->resetDevice(); break;
        case 35: _t->setIntersectSpeed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 36: _t->setStartSlope((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 37: _t->setAccFinalSlope((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->setDecFinalSlope((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 39: _t->setConfiguration((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 40: _t->setMarkPosition((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 41: _t->setAbsPosition((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 42: { qint32 _r = _t->getAbsPosition();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 43: { quint16 _r = _t->getFullStepSpeed();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 44: { quint16 _r = _t->getMaxSpeed();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint16 _r = _t->getMinSpeed();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 46: { quint16 _r = _t->getAcceleration();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 47: { quint16 _r = _t->getDeceleration();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 48: { quint8 _r = _t->getKvalHold();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 49: { quint8 _r = _t->getKvalRun();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 50: { quint8 _r = _t->getKvalAcc();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 51: { quint8 _r = _t->getKvalDec();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 52: { quint8 _r = _t->getStepMode();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 53: { quint16 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 54: { quint16 _r = _t->getIntersectSpeed();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 55: { quint8 _r = _t->getStartSlope();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 56: { quint8 _r = _t->getAccFinalSlope();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 57: { quint8 _r = _t->getDecFinalSlope();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 58: { quint8 _r = _t->getKTherm();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 59: { quint8 _r = _t->getOCDThreshold();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 60: { quint8 _r = _t->getStallThreshold();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 61: { quint16 _r = _t->getConfiguration();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 62: { qint32 _r = _t->getMarkPosition();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 63: { qint32 _r = _t->getCurrentSpeed();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::stepModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::thresholdSpeedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::maxSpeedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::minSpeedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::accelerationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::decelerationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::kValHoldChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::kValRunChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::kValAccChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::kValDecChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::kThermChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::ocdThresholdChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Stepper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stepper::stallThresholdChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Stepper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->Position(); break;
        case 1: *reinterpret_cast< quint8*>(_v) = _t->StepMode(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->ThresholdSpeed(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->MaxSpeed(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->MinSpeed(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->Acceleration(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->Deceleration(); break;
        case 7: *reinterpret_cast< quint8*>(_v) = _t->KValHold(); break;
        case 8: *reinterpret_cast< quint8*>(_v) = _t->KValRun(); break;
        case 9: *reinterpret_cast< quint8*>(_v) = _t->KValAcc(); break;
        case 10: *reinterpret_cast< quint8*>(_v) = _t->KValDec(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->KTherm(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->OcdThreshold(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->StallThreshold(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Stepper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< qint32*>(_v)); break;
        case 1: _t->setStepMode(*reinterpret_cast< quint8*>(_v)); break;
        case 2: _t->setFullStepSpeed(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setMaxSpeed(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setMinSpeed(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setAcceleration(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setDeceleration(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setKvalHold(*reinterpret_cast< quint8*>(_v)); break;
        case 8: _t->setKvalRun(*reinterpret_cast< quint8*>(_v)); break;
        case 9: _t->setKvalAcc(*reinterpret_cast< quint8*>(_v)); break;
        case 10: _t->setKvalDec(*reinterpret_cast< quint8*>(_v)); break;
        case 11: _t->setKTherm(*reinterpret_cast< quint8*>(_v)); break;
        case 12: _t->setOCDThreshold(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setStallThreshold(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Stepper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Stepper.data,
    qt_meta_data_Stepper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Stepper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stepper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Stepper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Stepper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 64;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Stepper::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Stepper::stepModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Stepper::thresholdSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Stepper::maxSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Stepper::minSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Stepper::accelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Stepper::decelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Stepper::kValHoldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Stepper::kValRunChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Stepper::kValAccChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Stepper::kValDecChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Stepper::kThermChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Stepper::ocdThresholdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Stepper::stallThresholdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
