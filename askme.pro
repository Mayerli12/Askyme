# Configuración de módulos de Qt
QT += core gui widgets

# Habilitar características de C++11
CONFIG += c++11

# Descomentar para deshabilitar API obsoleta antes de Qt 6.0.0
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

# Fuentes
SOURCES += \
    apunte.cpp \
    apunteform.cpp \
    asignatura.cpp \
    contribuidores.cpp \
    creditsform.cpp \
    cuestionario.cpp \
    cuestionarioform.cpp \
    listform.cpp \
    main.cpp \
    askme.cpp \
    pregunta.cpp \
    preguntaform.cpp \
    resultadoform.cpp \
    tema.cpp

# Encabezados
HEADERS += \
    apunte.h \
    apunteform.h \
    asignatura.h \
    askme.h \
    contribuidores.h \
    creditsform.h \
    cuestionario.h \
    cuestionarioform.h \
    listform.h \
    pregunta.h \
    preguntaform.h \
    resultadoform.h \
    tema.h

# Formularios
FORMS += \
    apunteform.ui \
    askme.ui \
    creditsform.ui \
    cuestionarioform.ui \
    listform.ui \
    preguntaform.ui \
    resultadoform.ui

# Reglas predeterminadas para implementación.
win32: target.path = $$OUT_PWD/release
else: unix: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Archivos adicionales
DISTFILES += \
    diagrama.qmodel

RESOURCES += \
    Resources.qrc

RC_ICONS = icono.ico


CONFIG += static

