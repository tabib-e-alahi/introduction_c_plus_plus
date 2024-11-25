#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    // change the size of the string
//    s.resize(4);
    // Output: hell
//    s.resize(15);
    // Output:  hello worldNULLNULLNULLNULLNULL or only hello world
    s.resize(15, 'x');
    // Output: hello worldxxxx, extra size filled with x
    cout << s << endl;
    return 0;
}




