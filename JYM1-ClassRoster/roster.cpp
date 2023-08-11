#include "roster.h"

Roster::Roster() {}

Roster::~Roster() {}

// MARK: parse
void Roster::parse(string row) {
    DegreeProgram degree {SOFTWARE};
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
    
    if (singleStudent[8] == "SECURITY") {
        degree = SECURITY;
    } else if (singleStudent[8] == "NETWORK") {
        degree = NETWORK;
    } else if (singleStudent[8] == "SOFTWARE") {
        degree = SOFTWARE;
    } else {
        cout << singleStudent[8] << " is not a valid degree." << endl;
    }
    
    this->add(singleStudent[0], singleStudent[1], singleStudent[2], singleStudent[3], stoi(singleStudent[4]), stoi(singleStudent[5]), stoi(singleStudent[6]), stoi(singleStudent[7]), degree);
}

// MARK: add
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int days[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    
    for (int i = 0; i < 5; ++i) {
        if (this->classRosterArray[i] == NULL) {
            this->classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, degreeProgram, days);
            break;
        }
    }
}

// MARK: remove
void Roster::remove(string studentID) {
    for (int i = 0; i < 5; ++i) {
        Student student = *this->classRosterArray[i];
        // check if student exists
        if (student.getStudentID() == studentID) {
            cout << "\nRemoving " << studentID << endl;
            // remove specific student data from array
            this->classRosterArray[i] = NULL;
        } else {
            // if not print
            const string errMsg = "No student with ID: " + studentID + " exists.";
            cout << errMsg << endl;
        }
    }
}

// MARK: printAll
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

// MARK: printAverageDaysInCourse
void Roster::printAverageDaysInCourse(string studentID) {
    // print average of days in Course for a specific student
    for (int i = 0; i < 5; ++i){
        Student student = *this->classRosterArray[i];
        if (student.getStudentID() == studentID) {
            int* days = student.getDaysToComplete();
            int avg = (days[0] + days[1] + days[2])/3;
            cout << "Student ID: " << studentID << ", average days in course is: " << avg << endl;
        }
    }
}

// MARK: printInvalidEmails
void Roster::printInvalidEmails() {
    cout << "\nDisplaying invalid emails:\n" << endl;
    for (int i = 0; i < 5; ++i) {
        Student student = *this->classRosterArray[i];
        // verifies student emails
        string email = student.getEmail();
        size_t pos = 0;
        string e_at = "@";
        string e_space = " ";
        string e_dot = ".";
        if ((pos = email.find(e_at)) == string::npos || (pos = email.find(e_space)) != string::npos || (pos = email.find(e_dot)) == string::npos) {
            // prints message for invalid email addresses
            cout << email << " - is invalid." << endl;
        }
    }
    const string note = "\nNote: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').\n";
    cout << note << endl;
}

// MARK: printByDegreeProgram
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    cout << "\nShowing students in degree program: SOFTWARE\n" << endl;
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
