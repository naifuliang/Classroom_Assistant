QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chooserole.cpp \
    login_student.cpp \
    login_teacher.cpp \
    main.cpp \
    mainwindow.cpp \
    register_student.cpp \
    register_teacher.cpp \
    student_mainwindow.cpp \
    teacher_mainwindow.cpp

HEADERS += \
    chooserole.h \
    login_student.h \
    login_teacher.h \
    mainwindow.h \
    register_student.h \
    register_teacher.h \
    student_mainwindow.h \
    teacher_mainwindow.h

FORMS += \
    chooserole.ui \
    login_student.ui \
    login_teacher.ui \
    mainwindow.ui \
    register_student.ui \
    register_teacher.ui \
    student_mainwindow.ui \
    teacher_mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
