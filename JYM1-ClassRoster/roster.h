#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"
#include <string>

using namespace std;

class Roster {
public:
    Student* classRosterArray[5] {};
    Roster();
    ~Roster();
    string* parse(string row);
    void add(int i, string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
};

#endif
