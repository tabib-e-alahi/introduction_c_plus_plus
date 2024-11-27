#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*this two begin and end function are used to iterate through a string, where there is no index feature,
    in some data structure there is no index, there we need this functions
    syntax with for string s using for loop:
                            for(string:: iterator it = s.begin(); it < s.end(); it++)
                            {
                            cout << *it ;
                            }

        also a shortcut for "string:: iterator":
        for(auto it = s.begin(); it < s.end(); it++)
                            {
                            cout << *it ;
                            }

    */
    string s = "hello  world";
    for (string:: iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it  << " ";
    }
    return 0;
}


