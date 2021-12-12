QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    check_page.cpp \
    chooserole.cpp \
    enterclass.cpp \
    insertpaper.cpp \
    login_student.cpp \
    login_teacher.cpp \
    main.cpp \
    mainwindow.cpp \
    managaclass.cpp \
    page_answer.cpp \
    quiz_score.cpp \
    register_student.cpp \
    register_teacher.cpp \
    signin_student.cpp \
    student.cpp \
    studentclassinfo.cpp \
    teacher.cpp \
    teacherclassinfo.cpp \
    total_score.cpp

HEADERS += \
    check_page.h \
    chooserole.h \
    enterclass.h \
    insertpaper.h \
    login_student.h \
    login_teacher.h \
    mainwindow.h \
    managaclass.h \
    page_answer.h \
    quiz_score.h \
    register_student.h \
    register_teacher.h \
    signin_student.h \
    student.h \
    studentclassinfo.h \
    teacher.h \
    teacherclassinfo.h \
    total_score.h

FORMS += \
    check_page.ui \
    chooserole.ui \
    enterclass.ui \
    insertpaper.ui \
    login_student.ui \
    login_teacher.ui \
    mainwindow.ui \
    managaclass.ui \
    page_answer.ui \
    quiz_score.ui \
    register_student.ui \
    register_teacher.ui \
    signin_student.ui \
    student.ui \
    studentclassinfo.ui \
    teacher.ui \
    teacherclassinfo.ui \
    total_score.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
