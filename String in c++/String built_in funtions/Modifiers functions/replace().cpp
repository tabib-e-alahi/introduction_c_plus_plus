#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello  world";
    cout <<"Initital string:   " << s << endl;
   // s.replace(4, 5, "Tabib"); // it will go to 4th index and delete 5 char and add tabib

    // if don;t want to delete any char, just add the new string:
    s.replace(4, 0, "Tabib");
    cout <<"After:   " << s << endl;
    return 0;
}





