#include "student.h"

// Accessors
string Student::getStudentID() {
    cout << studentID << endl;
    return studentID;
}

string Student::getFName() {
    cout << firstName << endl;
    return firstName;
}

string Student::getLName() {
    cout << lastName << endl;
    return lastName;
}

string Student::getEmail() {
    cout << email << endl;
    return email;
}

int Student::getAge() {
    cout << age << endl;
    return age;
}

DegreeProgram Student::getDegreeProgram() {
    cout << degreeProgram << endl;
    return degreeProgram;
}

int* Student::getDaysToComplete() {
    cout << daysToComplete << endl;
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
