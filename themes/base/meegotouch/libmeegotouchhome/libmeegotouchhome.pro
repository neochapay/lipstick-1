include(paths.pri)

TEMPLATE = subdirs
SUBDIRS = \
    ./images \
    ./style \
    ./svg

INSTALLS += conf
conf.files = *.conf
conf.path = $$THEME_DIR

QMAKE_EXTRA_TARGETS += check
check.commands = $$system(true)
QMAKE_EXTRA_TARGETS += check-xml
check-xml.commands = $$system(true)