#include "roster.h"

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
//    Determine what to add
}

void Roster::remove(string studentID) {
//    check if student exists
//    if not print
    const string errMsg = "No student with ID: " + studentID + " exists.";
    cout << errMsg << endl;
//    remove specific student data from array
}

void Roster::printAll() {
//    Loop through all students
//    print student data in a tab separated format
}

void Roster::printAverageDaysInCourse(string studentID) {
//    print average of days in Course for a specific student
}

void Roster::printInvalidEmails() {
//    verifies student emails
//    prints message for invalid email addresses
    const string note = "Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').";
    cout << note << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
//    prints student information for a specific degree program
}
