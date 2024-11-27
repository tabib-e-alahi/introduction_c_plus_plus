#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello  world";
//    It generally a pointer which points at the next point of the last element of the string, mean indicate the size
    //cout << s.begin() << endl;// it will give error as it a pointer, should be dereferenced for print
    cout << *s.end() << endl; // Output NULL
    cout << *(s.end()-1) << endl; // Output d
    return 0;
}

