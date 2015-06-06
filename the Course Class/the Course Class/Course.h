#ifndef __the_Course_Class__Course__
#define __the_Course_Class__Course__

#include <stdio.h>
#include <string>
using namespace std;

class Course
{
public:
    Course(const string& courseName, int capacity);
    //implement the destructor and copy constructor to preform a deep copy in the class
    ~Course();
    Course(const Course&);
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void clear();
    
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif
