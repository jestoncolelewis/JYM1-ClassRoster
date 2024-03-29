#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    DegreeProgram degreeProgram;
    int daysToComplete[3];
public:
    Student(string studentId_val, string firstName_val, string lastName_val, string email_val, int age_val, DegreeProgram degreeProgram_val, int daysToComplete_val[3]);
    Student(const Student &source);
    ~Student();
    
    void print();
    
    // Accessors
    string getStudentID();
    string getFName();
    string getLName();
    string getEmail();
    int getAge();
    DegreeProgram getDegreeProgram();
    int* getDaysToComplete();
    
    // Mutators
    void setStudentID(string in);
    void setFName(string in);
    void setLName(string in);
    void setEmail(string in);
    void setAge(int in);
    void setDegreeProgram(DegreeProgram in);
    void setDaysToComplete(int in[3]);
};

#endif
