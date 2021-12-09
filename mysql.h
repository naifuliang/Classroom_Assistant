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

class mysql:public QObject
{
    Q_OBJECT
public:
    mysql();


    void setSqlInformation(QString DBname,QString Uname,QString pw);
       //设置所要连接数据库的 “数据库名字” “用户名” “密码”

    bool connect();
       //连接数据库并打开，返回值为是否打开成功，连接方式为 ODBC

    int Login_sql(QString Name,QString Password,int mode);
       //查询所登录者的信息是否存在，若不存在返回 0，若存在  mode=0查询学生，返回学号 sid，mode=1表示查询教师，返回编号 uid
//    int teacherReg_sql(int Name,QString Password);
//       //教师注册，成功返回1，用户已存在返回0
//    int studentReg_sql(int sid,QString Name,QString Password);
//       //学生注册，成功返回1，用户已存在返回0

    QByteArray classSignIn_sql(int id); //id的课程发布签到，签到次数+1，返回签到码

    void studentSignIn_sql(int sid,int classid);  //uid的学生签到
    QString studentChoose_sql(int classid,int &sid);//随机选人，返回学生姓名，同时通过sid返回学生学号

    QJsonArray studentClassList_sql(int sid);
    QJsonArray teacherClassList_sql(int uid);
       /*返回学生的课程列表和签到次数的 json数组
        *    教师的课程列表的json数组
        * 学生
        * [
        *   {
        *       "id":
        *       "className":
        *       "teacherName":
        *       "sign_up_total":
        *       "sign_up":
        *   }
        * ]
        * 教师
        * [
        *   {
        *       "id":
        *       "className":
        *   }
        * ]
        * */

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

    QJsonArray paperList_sql(int uid);
       /*形参为教师编号，返回该老师的所有试卷信息
        * [
             {
                "id":
                "title":
                "lasting_time":
                "publish_time":
                "total_score":
                "content":
                 [
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
              }
          ]
        * */
    QJsonObject examCheck_sql(int paperid,QJsonArray PaperInfo,int &score);
       //根据 PaperInfo 计算分数并组装试卷，返回试卷json对象

    QJsonObject addStudentExam_sql(int sid,int paperid,QJsonArray PaperInfo,int &score);
        /* 形参 学生学号，试卷id，返回组装好的试卷json对象，并通过score返回计算的成绩
          同时创建该试卷的json对象加入数据库的student table
          PaperInfo格式： [1,2,3,4]  用数字1-4表示选项
        * 返回格式：
        *  {
        *   "title":
        *   "lasting_time":
        *   "publish_time":
        *   "total_score":
        *   "get_score":
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
                   "choose":
               }
             ]
           }
        * */

    QJsonArray studentExamList_sql(int sid);
       /*查找某学生的所有试卷的简略信息
        * [
        *   {
        *       "id":
                "title":
                "publish_time":
                "get_score":
                "total_score":
        *   }
        * ]
        * */
    QJsonObject paperInquiry_sql(int sid,int paperid);
       //查找学生 sid的试卷paperid详细内容,，格式同上上
    int insertPaper_sql(int uid,int paperid,QJsonObject PaperInfo);
       /*根据试卷的内容和教师修改相应试卷到数据库中，若 paperid=0，则添加一份试卷，若!=0，则修改对应id的试卷。
        * 返回该试卷的编号
        * PaperInfo格式：
            {
               "title":
               "lasting_time":
               "publish_time":
               "total_score":
               "content":
                [
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
                  }
               ]
             }
        * */
    QJsonObject publishPaper_sql(int classid,int paperid);
       /*教师发布试卷，返回试卷 json数组，同时在数据库中更新该试卷的课程属性
             {
                "id":
                "title":
                "lasting_time":
                "publish_time":
                "total_score":
                "content":
                 [
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
              }
        *
        * */
    //    void setdown();
private:
    QSqlDatabase DB;
    int sign_cnt;
    QByteArray sign_in_code;
    QString DatabaseName,UserName,Password;
};

#endif // MYSQL_H
