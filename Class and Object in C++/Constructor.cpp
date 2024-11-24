#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls; // as class is a reserved keyword we can not use class as variable so we are using cls
    int roll;
    double gpa;

    //this is the constructor
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
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

