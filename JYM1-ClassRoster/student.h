#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student {
public:
    // Accessors
    string getStudentID();
    string getFName();
    string getLName();
    string getEmail();
    int getAge();
    DegreeProgram getDegreeProgram();
    int* getDaysToComplete();
    
    // Mutators
    void editStudentID(string in);
    void editFName(string in);
    void editLName(string in);
    void editEmail(string in);
    void editAge(int in);
    void editDegreeProgram(DegreeProgram in);
    void editDaysToComplete(int in);
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    DegreeProgram degreeProgram;
    int daysToComplete[];
};

#endif
