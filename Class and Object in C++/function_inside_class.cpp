#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this -> name = name;
        this ->roll = roll;
    }

    void output()
    {
        cout << "Hello " << name << ", Your roll number is: " << roll << endl;
    }
};
int main()
{
    Student sakib("Sakib", 45);
    sakib.output();
    Student rakib("Rakib", 24);
    rakib.output();
    return 0;
}


