QT += quick virtualkeyboard

SOURCES += \
        AppWindow/AppMain.cpp \
        AppWindow/AppWindow.cpp \
        Common/Enums.cpp \
        main.cpp
resources.prefix = /$${TARGET}
RESOURCES += resources \
    Home.qrc

resources.files = Component/main.qml

HEADERS += \
    AppWindow/AppMain.h \
    AppWindow/AppWindow.h \
    Common/Enums.h

DISTFILES +=
