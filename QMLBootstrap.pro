TARGET = YourAppName
TEMPLATE = app

QT += qml quick widgets
android : QT += androidextras

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp \
    src/bootstrap/bootstrapinfo.cpp

HEADERS += \
    src/bootstrap/bootstrapinfo.h

COMPONENT_FILES += $$files(qml/Components/*.qml)

QML_FILES += \
    qml/main.qml

JS_FILES += $$files(js/*.js)

OTHER_FILES += \
    $$COMPONENT_FILES \
    $$QML_FILES \
    $$JS_FILES

RESOURCES += \
    qml.qrc \
    font.qrc \
    component.qrc
