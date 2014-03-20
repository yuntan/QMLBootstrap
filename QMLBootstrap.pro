TARGET = YOURAPPNAME
TEMPLATE = app

QT += qml quick widgets
android : QT += androidextras

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp

QML_FILES += \
    qml/main.qml

#JS_FILES += \

OTHER_FILES += $$QML_FILES

#RESOURCES += \

RESOURCES += \
    qml.qrc
