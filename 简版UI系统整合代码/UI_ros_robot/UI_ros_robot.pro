QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += /opt/ros/kinetic/include
DEPENDPATH += /opt/ros/kinetic/include
LIBS += -L/opt/ros/kinetic/lib -lroscpp -lroslib -lrosconsole -lroscpp_serialization -lrostime
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    locate.cpp \
    main.cpp \
    navigation.cpp \
    slam.cpp \
    ui_ros.cpp \
    user_ui.cpp \
    voice_cmd.cpp

HEADERS += \
    locate.h \
    navigation.h \
    slam.h \
    ui_ros.h \
    user_ui.h \
    voice_cmd.h

FORMS += \
    locate.ui \
    ui_ros.ui \
    user_ui.ui

TRANSLATIONS += \
    UI_ros_robot_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resource.qrc

QMAKE_LFLAGS += -no-pie
