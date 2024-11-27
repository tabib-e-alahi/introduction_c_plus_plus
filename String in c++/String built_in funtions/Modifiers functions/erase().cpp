#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello  world";
    cout <<"Initital string:   " << s << endl;
   // s.erase(5); // index 5 to end will be deleted
//    cout <<"After:   " << s << endl;
    // erase(start, how many char remove);
    s.erase(3, 2); // from index 3 delete 2 character
    cout <<"After:   " << s << endl;
    return 0;
}




