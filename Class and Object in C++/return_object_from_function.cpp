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

Student func()
{
   Student rahim(45, 5, 3.45);
   return rahim;
}

int main()
{
    Student obj = func();
    Student karim(32, 7, 1.65);
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}


