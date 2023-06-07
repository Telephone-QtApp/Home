QT += quick virtualkeyboard

SOURCES += \
        AppWindow/AppMain.cpp \
        AppWindow/AppWindow.cpp \
        Common/Enums.cpp \
        main.cpp

resources.files = main.qml 
resources.prefix = /$${TARGET}
RESOURCES += resources

HEADERS += \
    AppWindow/AppMain.h \
    AppWindow/AppWindow.h \
    Common/Enums.h
