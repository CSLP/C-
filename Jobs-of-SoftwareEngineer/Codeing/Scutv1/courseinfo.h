#ifndef COURSEINFO_H
#define COURSEINFO_H
#include<QString>
#include<string>
using std::string;
class CourseInfo
{
public:
    CourseInfo(int,string);
    int id;
    QString courseName;
};

#endif // COURSEINFO_H
