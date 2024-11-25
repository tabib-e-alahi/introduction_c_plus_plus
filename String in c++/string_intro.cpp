#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    cout << s << endl;
// in string we can directly reassign it , but can't do it in char array
    s = "world";
    cout << s << endl;
    // In char array we need strcmp() to compare to char, but in string , compare can be done with "=="
    string s1 = "hello", s2 = "hello";
    if(s1 == s2)
    {
        cout << "Same string" << endl;
    }
    else {
        cout << "Not same\n";
    }

    return 0;
}
