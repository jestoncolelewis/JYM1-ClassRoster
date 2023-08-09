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
void Student::editStudentID(string in) {
    studentID = in;
}

void Student::editFName(string in) {
    firstName = in;
}

void Student::editLName(string in) {
    lastName = in;
}

void Student::editEmail(string in) {
    email = in;
}

void Student::editAge(int in) {
    age = in;
}

void Student::editDegreeProgram(DegreeProgram in) {
    degreeProgram = in;
}

void Student::editDaysToComplete(int in[3]) {
    for (int i = 0; i < 3; ++i) {
        daysToComplete[i] = in[i];
    }
}
