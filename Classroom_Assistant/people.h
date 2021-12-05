#ifndef PEOPLE_H
#define PEOPLE_H

#include <QString>


class studentExam{
public:
    studentExam();
    int id,score;
    int opt[100]={0};
};


class student
{
public:
    student();

    QString name;
    int uid;
    int sid;
    int joinClass[100][2];  //joinClass[][0]=课程id,[1]=签到次数
    studentExam joinExam;
};
#endif // PEOPLE_H
