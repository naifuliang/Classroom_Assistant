QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    check_page.cpp \
    chooserole.cpp \
    enter_class.cpp \
    enter_quiz.cpp \
    login_student.cpp \
    login_teacher.cpp \
    main.cpp \
    mainwindow.cpp \
    page_answer.cpp \
    register_student.cpp \
    register_teacher.cpp \
    signin_student.cpp \
    student.cpp \
    teacher.cpp

HEADERS += \
    check_page.h \
    chooserole.h \
    enter_class.h \
    enter_quiz.h \
    login_student.h \
    login_teacher.h \
    mainwindow.h \
    page_answer.h \
    register_student.h \
    register_teacher.h \
    signin_student.h \
    student.h \
    teacher.h

FORMS += \
    check_page.ui \
    chooserole.ui \
    enter_class.ui \
    enter_quiz.ui \
    login_student.ui \
    login_teacher.ui \
    mainwindow.ui \
    page_answer.ui \
    register_student.ui \
    register_teacher.ui \
    signin_student.ui \
    student.ui \
    teacher.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
