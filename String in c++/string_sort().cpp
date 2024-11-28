#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s("Hello");
    cin >> s;
    // here for the string we don't know the size of the string so we can use s.begin() and end()
    sort(s.begin(), s.end());
    cout << s <<endl;
    return 0;
}
