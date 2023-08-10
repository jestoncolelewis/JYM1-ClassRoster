#include "roster.h"

Roster::Roster() {}

Roster::~Roster() {}

string* Roster::parse(string in) {
    string* singleStudent = new string[9];
    string currentStudent = in;
    size_t pos = 0;
    string delimiter = ",";
    int j = 0;
    while((pos = currentStudent.find(delimiter)) != string::npos) {
        singleStudent[j] = currentStudent.substr(0, pos);
        currentStudent.erase(0, pos + delimiter.length());
        ++j;
    }
    singleStudent[8] = currentStudent;
    
    return singleStudent;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    int days[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    
    Student student(studentID, firstName, lastName, emailAddress, age, degreeprogram, days);
    student.getStudentID();
    student.getFName();
    student.getLName();
    student.getEmail();
    student.getAge();
    student.getDegreeProgram();
    student.getDaysToComplete();
}

void Roster::remove(string studentID) {
    // check if student exists
    // if not print
    const string errMsg = "No student with ID: " + studentID + " exists.";
    cout << errMsg << endl;
    // remove specific student data from array
}

void Roster::printAll() {
    // Loop through all students
    // print student data in a tab separated format
}

void Roster::printAverageDaysInCourse(string studentID) {
    // print average of days in Course for a specific student
}

void Roster::printInvalidEmails() {
    // verifies student emails
    // prints message for invalid email addresses
    const string note = "Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').";
    cout << note << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    // prints student information for a specific degree program
}
