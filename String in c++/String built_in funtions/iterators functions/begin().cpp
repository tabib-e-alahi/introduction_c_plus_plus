#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello  world";
//    It generally a pointer which points at the first element of the string
    //cout << s.begin() << endl;// it will give error as it a pointer, should be dereferenced for print
    cout << *s.begin() << endl;
    return 0;
}
