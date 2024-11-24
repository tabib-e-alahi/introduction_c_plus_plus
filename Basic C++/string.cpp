#include<iostream>
using namespace std;
int main()
{
    char s[100];
    //cin >> s; // only take upto first space
    // take all the input
    cin.getline(s, 100);
    cout  << s << endl;
    return 0;
}
