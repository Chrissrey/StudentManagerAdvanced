//Author:Christopher Rey Almaraz

#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
#include<string>
#include <vector>

using namespace std;

//define my class

class student
{
    private:
    vector<double>grades;
    double score;
    string firstName;
    string lastName;
             
    public:
    student();
    void setName(string, string);
    string fullName();
    double getScore();
    void addGrade(double);
};
#endif
