#ifndef MYSQL_H
#define MYSQL_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <cstdio>
#include <QByteArray>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSqlQuery>
class mysql
{
public:
    mysql();
    void setSqlInformation(QString DBname,QString Uname,QString pw);
       //设置所要连接数据库的 “数据库名字” “用户名” “密码”

    bool connect();
       //连接数据库并打开，返回值为是否打开成功，连接方式为 ODBC

    int Login_sql(QString Name,QString Password,int mode);
       //查询所登录者的信息是否存在，若不存在返回 0，若存在  mode=0查询学生，返回学号 sid，mode=1表示查询教师，返回编号 uid

    QByteArray classSignIn_sql(int id); //id的课程发布签到，签到次数+1，返回签到码
    void sign_in_sql(int uid);  //uid的学生签到（还未写，要根据 class的 json格式来写）

    //以下函数未测试 bug

    QJsonArray classList_sql(int uid,int mode);
       //mode=0返回 uid 的学生的课程列表和签到次数的 json数组；mode=1返回 uid的教师的课程列表的json数组

    QJsonArray studentList_sql(int id);
       /*返回参与了 id的课程的学生的json数组，包含以下 key值

                                    QString name;
                                    int sid;
                                    QJsonArray class;
                                    QJsonArray exam;
                                    */


    QJsonArray studentExamInfo_sql(int sid,int classid);
       /*教师可查看的学生考试信息详情：形参为 学生学号 和 课程 id， 返回对应的考试信息json数组，

                                   若id=0，返回所有课程;id!=0，返回对应课程
                                   包含以下 key值
                                   试卷名称 QString title
                                   发布时间 QString publish_time
                                   考试成绩 int score
                                   总成绩 int total_score
                                 */

    QJsonArray paperList_sql(int uid,int classid);
       /*形参为教师编号和课程编号，若classid=0返回该老师的所有试卷信息
        *
        *   "title":
        *   "lasting_time":
        *   "publish_time":
        *   "total_score":
        *   "content":
        *    [
               {
                   "id":
                   "description":
                   "option":
                   {
                       "A":
                       "B":
                       "C":
                       "D":
                   }
                   "correctAns":
               }
            ]
        * */
    QJsonObject examCheck_sql(int paperid,QJsonArray PaperInfo,int &score);
    QJsonArray paperInquiry_sql(int sid,int paperid);
    QJsonObject addStudentExam_sql(int sid,int paperid,QJsonArray PaperInfo,int &score);

private:
    QSqlDatabase DB;
    int sign_cnt;
    QByteArray sign_in_code;
    QString DatabaseName,UserName,Password;
};

#endif // MYSQL_H
