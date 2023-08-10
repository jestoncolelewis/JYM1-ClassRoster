//
//  main.cpp
//  JYM1-ClassRoster
//
//  Created by Jeston Lewis on 7/28/23.
//

#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"

using namespace std;

int main() {
    DegreeProgram degree {SOFTWARE};
    
    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Jeston,Lewis,jlew910@wgu.edu,34,15,50,28,SOFTWARE"};
    
    string singleStudent[9];
    string currentStudent = studentData[0];
    size_t pos = 0;
    string delimiter = ",";
    int j = 0;
    while((pos = currentStudent.find(delimiter)) != string::npos) {
        singleStudent[j] = currentStudent.substr(0, pos);
        currentStudent.erase(0, pos + delimiter.length());
        ++j;
    }
    
    singleStudent[8] = currentStudent;
    if (singleStudent[8] == "SECURITY") {
        degree = SECURITY;
    } else if (singleStudent[8] == "NETWORK") {
        degree = NETWORK;
    } else if (singleStudent[8] == "SOFTWARE") {
        degree = SOFTWARE;
    } else {
        cout << singleStudent[8] << " is not a valid degree." << endl;
    }
    
    int days[] = {stoi(singleStudent[5]), stoi(singleStudent[6]), stoi(singleStudent[7])}; // not needed in final
    
    
    Student joe;
    joe.setStudentID(singleStudent[0]);
    joe.getStudentID();
    joe.setFName(singleStudent[1]);
    joe.getFName();
    joe.setLName(singleStudent[2]);
    joe.getLName();
    joe.setEmail(singleStudent[3]);
    joe.getEmail();
    joe.setAge(stoi(singleStudent[4]));
    joe.getAge();
    joe.setDegreeProgram(degree);
    joe.getDegreeProgram();
    joe.setDaysToComplete(days);
    joe.getDaysToComplete();
    
    return 0;
}
