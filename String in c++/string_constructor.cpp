#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s("Hello");
    cout << s <<endl; // Output "Hello"
    string a("Hello", 3);
    cout << a <<endl; // Output "Hel"
    string b = "Hello World";
    string t(b , 4);
    cout << t<<endl; // Output "o World"
    string c(5, 'A'); // fill 5 size string with A
    cout << c<< endl;// Output "AAAAA"
}
