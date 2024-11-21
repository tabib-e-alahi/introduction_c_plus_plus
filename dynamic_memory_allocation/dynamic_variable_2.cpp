#include<bits/stdc++.h>
using namespace std;

int *p;
void func()
{
    int *x = new int;
    *x = 20;
    p = x;
    cout << "In func--> " << *p << endl;

    return;
}

int main()
{
    func();
    cout << "In Main--> " << *p << endl;
}
