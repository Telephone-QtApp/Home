QT += quick virtualkeyboard
CONFIG += c++20

SOURCES += \
        AppWindow/AppMain.cpp \
        AppWindow/AppWindow.cpp \
        Common/Enums.cpp \
        Controller/HomeController.cpp \
        Interface/AbstractInterface.cpp \
        Interface/SmartPhoneInterface.cpp \
        Interface/SystemSettingInterface.cpp \
        Model/AppModel.cpp \
        main.cpp
resources.prefix = /$${TARGET}
RESOURCES += resources \
    Home.qrc \
    Images.qrc

resources.files = Component/main.qml

HEADERS += \
    AppWindow/AppMain.h \
    AppWindow/AppWindow.h \
    Common/Enums.h \
    Controller/HomeController.h \
    Interface/AbstractInterface.h \
    Interface/SmartPhoneInterface.h \
    Interface/SystemSettingInterface.h \
    Model/AppModel.h

DISTFILES +=

LIBS += -L$$PWD/../Executable/Libraries \
        -lservice

INCLUDEPATH += $$PWD/../ServiceWrapper/include \
               $$PWD/../ServiceWrapper/include/Common
               $$PWD/../ServiceWrapper/include/SystemSetting
