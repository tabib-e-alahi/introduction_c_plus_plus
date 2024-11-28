#include<bits/stdc++.h>
using namespace std;
int main()
{
//    string s;
    /*in char array we use cin.getline(s, size(s)) to get input with spaces , but string is a built in dynamc class
    and dynamic thing has no fixed size , so instead we use this: getline(cin,s);
    */
//    getline(cin, s);
//    cout << s;
    /*Bu there is an issue with this method, if we take anothe input before this string, like we take
    int x;
    cin >> x;
    string s;
    getline(cin, s);
    so here, when the user will type the inputs: first they will type the integer, lets say 10, the they hit enter to go to next line
    for the next string and type there string. But the getline captured the enter as the input and ignore the string typed later
        for this problem we need to use cin.ignore() before getline
    */
    //first try the issue:
    /*
    int x;
    cin >> x;
    string s;
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    */

    int x;
    cin >> x;
    string s;
    cin.ignore();
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    return 0;
}
