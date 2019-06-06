#include "topic.h"
#include "ui_topic.h"
#include<QString>
#include<QDebug>
#include<vector>
#include<QGroupBox>
#include<QTextBrowser>
#include<QVBoxLayout>
#include"message.h"
#include"interface.h"
#include<QString>
#include<QPushButton>
#include<QLineEdit>
#include<QPlainTextEdit>
#include"comment.h"
using std::vector;
Topic::Topic(Message msg, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Topic)
{
    ui->setupUi(this);
    vector<Message>	comments=getCommentsByTopicId(msg.id);
    QVBoxLayout *layout=new QVBoxLayout;
    QString comTitle;
    QVBoxLayout*la=new QVBoxLayout;
    QHBoxLayout *lb=new QHBoxLayout;
    QPushButton *answer=new QPushButton("回答问题");
    QPushButton *ok=new QPushButton("确定");
    lb->addWidget(answer);
    lb->addWidget(ok);
    lb->setSpacing(30);
    la->addLayout(lb);
    QPlainTextEdit *co=new QPlainTextEdit;
    la->addWidget(co);
    layout->addLayout(la);
    for(unsigned int i=0;i<comments.size();++i)
    {
        Comment *b=new Comment(comments[i]);
        comTitle=comments[i].author+"                     "+comments[i].time;
        b->setTitle(comTitle);
        layout->addWidget(b);
    }
    ui->scrollArea->widget()->setLayout(layout);
    ui->scrollArea->hide();
    QString topicTitle=msg.author+":"+msg.content+"             "+msg.time;
    //qDebug()<<QString::fromStdString(msg.content);
    ui->label->setText(topicTitle);
}

Topic::~Topic()
{
    delete ui;
}

void Topic::setVis(bool v)
{
    ui->scrollArea->setVisible(v);
}