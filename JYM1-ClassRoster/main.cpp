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
    Roster classRoster;
    DegreeProgram degree {SOFTWARE};
    
    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Jeston,Lewis,jlew910@wgu.edu,34,15,50,28,SOFTWARE"};
    
    for (int i = 0; i < 5 ; ++i) {
        string singleStudent[9];
        size_t pos = 0;
        string delimiter = ",";
        int j = 0;
        while((pos = studentData[i].find(delimiter))) {
            singleStudent[j] = studentData[i].substr(0, pos);
            ++j;
        }
        
        if (singleStudent[8] == "SOFTWARE") {
            degree = SOFTWARE;
        } else if (singleStudent[8] == "SECURITY") {
            degree = SECURITY;
        } else if (singleStudent[8] == "NETWORK") {
            degree = NETWORK;
        };
            
        classRoster.add(singleStudent[0], singleStudent[1], singleStudent[2], singleStudent[3], stoi(singleStudent[4]), stoi(singleStudent[5]), stoi(singleStudent[6]), stoi(singleStudent[7]), degree);
    }
    
    classRoster.printAll();
    
    classRoster.printInvalidEmails();
    
    classRoster.printAverageDaysInCourse(<#string studentID#>);
//    loop Roster and do ^^
    
    classRoster.printByDegreeProgram(SOFTWARE);
    
    classRoster.remove("A3");
    
    classRoster.printAll();
    
    classRoster.remove("A3");
    
    return 0;
}
