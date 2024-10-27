TARGET = ru.template.FoodWeek

CONFIG += \
    auroraapp

PKGCONFIG += \

SOURCES += \
    src/mailplanner.cpp \
    src/main.cpp \

HEADERS += \
    src/mailplanner.h

DISTFILES += \
    rpm/ru.template.FoodWeek.spec \

AURORAAPP_ICONS = 86x86 108x108 128x128 172x172

CONFIG += auroraapp_i18n

TRANSLATIONS += \
    translations/ru.template.FoodWeek.ts \
    translations/ru.template.FoodWeek-ru.ts \

QT += widgets
