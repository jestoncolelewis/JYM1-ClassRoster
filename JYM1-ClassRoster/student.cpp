#include "student.h"

Student::Student(string studentId_val, string firstName_val, string lastName_val, string email_val, int age_val, DegreeProgram degreeProgram_val, int daysToComplete_val[3]) : studentID{studentId_val}, firstName{firstName_val}, lastName{lastName_val}, email{email_val}, age{age_val}, degreeProgram{degreeProgram_val}, daysToComplete{daysToComplete_val[0], daysToComplete_val[1], daysToComplete_val[2]} {}

Student::Student(const Student &source) : studentID{source.studentID}, firstName{source.firstName}, lastName{source.lastName}, email{source.email}, age{source.age}, degreeProgram{source.degreeProgram}, daysToComplete{source.daysToComplete[0], source.daysToComplete[1], source.daysToComplete[2]} {}

Student::~Student() {}

// Accessors
string Student::getStudentID() {
    return studentID;
}

string Student::getFName() {
    return firstName;
}

string Student::getLName() {
    return lastName;
}

string Student::getEmail() {
    return email;
}

int Student::getAge() {
    return age;
}

DegreeProgram Student::getDegreeProgram() {
    string degreeProgram_str;
    switch (degreeProgram) {
        case SECURITY:
            degreeProgram_str = "SECURITY";
            break;
        case NETWORK:
            degreeProgram_str = "NETWORK";
            break;
        case SOFTWARE:
            degreeProgram_str = "SOFTWARE";
            break;
    }
    return degreeProgram;
}

int* Student::getDaysToComplete() {
    return daysToComplete;
}


// Mutators
void Student::setStudentID(string in) {
    studentID = in;
}

void Student::setFName(string in) {
    firstName = in;
}

void Student::setLName(string in) {
    lastName = in;
}

void Student::setEmail(string in) {
    email = in;
}

void Student::setAge(int in) {
    age = in;
}

void Student::setDegreeProgram(DegreeProgram in) {
    degreeProgram = in;
}

void Student::setDaysToComplete(int in[3]) {
    for (int i = 0; i < 3; ++i) {
        daysToComplete[i] = in[i];
    }
}
