#include "course.h"
#include "ui_course.h"
#include"sendfile.h"
Course::Course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course)
{
    ui->setupUi(this);
    this->move(390,155);
    ui->textBrowser->append("nimasil");
}

Course::~Course()
{
    delete ui;
}

void Course::on_backPushButton_clicked()
{
    close();
}

void Course::on_submitPushButton_clicked()
{
   SendFile *s=new SendFile(this);
   s->show();
}

void Course::courseInfo(std::__cxx11::string info)
{
   // string teacherInfo=getTeacherInfoByCourseName(info);
    //string courseInfo=getCourseInfoByCourseName(info);
    //list<string> homeworkInfo=getHomeworkInfoByCourseName(info);
    //ui->textBrowser
}