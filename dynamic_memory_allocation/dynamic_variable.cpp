#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10; // static way
    int *p = new int; // dynamic way
    *p = 100;
    cout << *p << endl;
    return 0;
}
