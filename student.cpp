//Author: Christopher Rey Almaraz

#include "student.h"
#include <iostream>
#include<string>
#include <vector>
using namespace std;

void student::setName(string first, string last)
{
    firstName=first;
    lastName=last;
}
string student::fullName()
{
    string fullName= firstName;
    fullName.append(" ");
    fullName.append(lastName);
    return fullName;
}
double student::getScore()
{
   return score;
}
void student::addGrade(double letterGrade)
{
     grades.push_back(letterGrade);
     double total=0;
     for(int i=0;i<grades.size();i++)
     {
        total=total+grades[i];
     }score=total/grades.size();
}
student::student()
{
    score=0;
    firstName="";
    lastName="";


}
