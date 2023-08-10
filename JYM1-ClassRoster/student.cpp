#include "student.h"

Student::Student() : studentID{"None"}, firstName{"John"}, lastName{"Doe"}, email{"noreply@email.com"}, age{18}, degreeProgram{SOFTWARE}, daysToComplete{7, 14, 31} {}

Student::Student(const Student &source) : studentID{source.studentID}, firstName{source.firstName}, lastName{source.lastName}, email{source.email}, age{source.age}, degreeProgram{source.degreeProgram}, daysToComplete{source.daysToComplete[0], source.daysToComplete[1], source.daysToComplete[2]} {}

Student::~Student() {}

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
    cout << degreeProgram_str << endl;
    return degreeProgram;
}

int* Student::getDaysToComplete() {
    cout << daysToComplete[0] << ", " << daysToComplete[1] << ", " << daysToComplete[2] << endl;
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
