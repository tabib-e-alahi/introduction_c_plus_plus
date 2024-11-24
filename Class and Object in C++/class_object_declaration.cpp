#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a;
    a.roll = 45;
    a.gpa = 4.78;
    // we can assign name like a.name = "Tabib , instead do this
    char temp[100] = "Tabib";
    strcpy(a.name, temp);
    cout << a.name << " " << a.roll << " " <<a.gpa << endl;
    return 0;
}
