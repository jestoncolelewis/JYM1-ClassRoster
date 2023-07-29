#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"

using namespace std;

class Roster {
public:
    void add();
    void remove();
    void printAll();
    void printAverageDaysInCourse();
    void printInvalidEmails();
    void printByDegreeProgram();
};

#endif
