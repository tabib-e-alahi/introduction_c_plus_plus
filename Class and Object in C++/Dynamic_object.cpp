#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls; // as class is a reserved keyword we can not use class as variable so we are using cls
    int roll;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
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
    Student *k = new Student(10, 5, 3.56);
    cout << k->roll << " " << k->cls << " " << k->gpa << endl;
    return 0;
}


