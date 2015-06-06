#include "Course.h"
using namespace std;

Course:: Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

Course::~Course()
{
    delete[] students;
}

string Course:: getCourseName() const
{
    return courseName;
}

void Course:: addStudent(const string& name)
{
    if (numberOfStudents > capacity){
        string* moreStudents = new string[capacity+1];
        capacity++;
        moreStudents[numberOfStudents] = name;
    }
    else
        students[numberOfStudents] = name;
    
    numberOfStudents++;
//if the array capacity is exceeded increase the array size by creating a new larget array and copying the contents of the current array to it
}

void Course::dropStudent(const string& name)
{
//drop a student from a course
    for (int i = 0; i < numberOfStudents; i++){
        if (students[i] == name)
          students[i] = "Removed";
    }
    string temp;
    for (int i = 0; i < numberOfStudents; i++){
        if (students[i] == "Removed"){
            students[i] = students[i+1];
            students [i+1] = "Removed";
        }
    }
    numberOfStudents--;
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

void Course::clear(){
    
    numberOfStudents = 0;
}


