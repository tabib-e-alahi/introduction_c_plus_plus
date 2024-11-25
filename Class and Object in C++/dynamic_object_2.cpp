#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this -> roll = roll;
        this -> cls = cls;
        this -> gpa = gpa;
    }
};

Student* my_function()
    {
        Student *karim = new Student(10, 20, 4.56);
        return karim;
    }

int main()
{
    Student* p = my_function();
    cout << p -> roll << " " << p -> cls<< " " << p->gpa;
}
