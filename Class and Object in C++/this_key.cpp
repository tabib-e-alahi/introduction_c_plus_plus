#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls; // as class is a reserved keyword we can not use class as variable so we are using cls
    int roll;
    double gpa;

    //this is the constructor
    Student(int roll, int cls, double gpa)
    {
        /*
        if the argument name are same as the class variable name we need to use this key
            we need to use this key, as program will not understand which variable are this
        */
         this ->roll = roll;
        this ->cls = cls;
        this ->gpa = gpa;
        /* this is a pointer which point that this is a class variable
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;*/
    }
};

int main()
{
    Student rahim(45, 5, 3.45);
    Student karim(32, 7, 1.65);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}

