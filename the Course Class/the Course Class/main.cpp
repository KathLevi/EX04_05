//////////////////////////
//Name: Kathleen Levi
//
//Project: EX04_05 (11.13)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
#include "Course.h"
using namespace std;

int* doubleCapacity (const int* list, int size);
void addNumbers (int* list, int size);

int main() {
 //write a test program that creates a course
    Course c1("CompSci2", 2);
    
//add 3 students
    c1.addStudent("John Nash");
    c1.addStudent("Chandler Bing");
    c1.addStudent("Pete Tucker");
    
//remove a student
    c1.dropStudent("Chandler Bing");
    
//displays the students in the course
    cout << "The students enrolled in this course are: ";
    string* students = c1.getStudents();
    for (int i = 0; i < c1.getNumberOfStudents(); i++){
        cout << students[i] << ", ";
    }
    
//implement the destructor and copy constructor to preform a deep copy in the class
    Course c2(c1);
    
    
 
    
}