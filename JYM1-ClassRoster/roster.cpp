#include "roster.h"

Roster::Roster() {}

Roster::~Roster() {}

string* Roster::parse(string row) {
    string* singleStudent = new string[9];
    size_t pos = 0;
    string delimiter = ",";
    int j = 0;
    while((pos = row.find(delimiter)) != string::npos) {
        singleStudent[j] = row.substr(0, pos);
        row.erase(0, pos + delimiter.length());
        ++j;
    }
    singleStudent[8] = row;
    
    return singleStudent;
}

void Roster::add(int i, string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    int days[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    
    this->classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, degreeprogram, days);
}

void Roster::remove(string studentID) {
    // check if student exists
    // if not print
    const string errMsg = "No student with ID: " + studentID + " exists.";
    cout << errMsg << endl;
    // remove specific student data from array
}

void Roster::printAll() {
    cout << "\nDisplaying all students:" << endl;
    // Loop through all students
    for (int i = 0; i < 5; ++i) {
        Student student = *this->classRosterArray[i];
        int* days = student.getDaysToComplete();
        string degrees[3] = {"SECURITY", "NETWORK", "SOFTWARE"};
        // print student data in a tab separated format
        cout << student.getStudentID() << "\t" << student.getFName() << "\t" << student.getLName() << "\t" << student.getAge() << "\t" << "{" << days[0] << "," << days[1] << "," << days[2] << "}" << "\t" << degrees[student.getDegreeProgram()] << endl;
    }
    cout << endl;
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
    cout << "Showing students in degree program: SOFTWARE" << endl << endl;
    // prints student information for a specific degree program
    for (int i = 0; i < 5; ++i) {
        Student student = *this->classRosterArray[i];
        int* days = student.getDaysToComplete();
        string degrees[3] = {"SECURITY", "NETWORK", "SOFTWARE"};
        if (student.getDegreeProgram() == degreeProgram) {
            // print student data in a tab separated format
            cout << student.getStudentID() << "\t" << student.getFName() << "\t" << student.getLName() << "\t" << student.getAge() << "\t" << "{" << days[0] << "," << days[1] << "," << days[2] << "}" << "\t" << degrees[student.getDegreeProgram()] << endl;
        }
    }
    cout << endl;
}
