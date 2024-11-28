#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s("Hello");
    cin >> s;
    // its a loop like in python "for letter in word:" then the loop works
    for(char c: s) // its like for c in s: but here we need to mention the datatype
    { // and in a string each letter is character datatype
        cout << c <<endl;
    }
    return 0;
}

