QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    client.cpp \
    socket.cpp \
    student_class.cpp \
    student_login.cpp \
    student_paperlist.cpp \
    student_quiz.cpp \
    teacher_add.cpp \
    teacher_class.cpp \
    teacher_login.cpp \
    teacher_paperlist.cpp \
    teacher_show.cpp

HEADERS += \
    client.h \
    socket.h \
    student_class.h \
    student_login.h \
    student_paperlist.h \
    student_quiz.h \
    teacher_add.h \
    teacher_class.h \
    teacher_login.h \
    teacher_paperlist.h \
    teacher_show.h

FORMS += \
    client.ui \
    student_class.ui \
    student_login.ui \
    student_paperlist.ui \
    student_quiz.ui \
    teacher_add.ui \
    teacher_class.ui \
    teacher_login.ui \
    teacher_paperlist.ui \
    teacher_show.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
