#include<iostream>
using namespace std;
int main()
{
    int n = 7;
   /*
    if(n % 2 == 0){
        cout << "Then number is even.\n";
    }
    else{
        cout << "The number is odd,\n";
    }*/
    // now same this in ternary:
    n % 2 == 0 ? cout << "The number is odd,\n" : cout << "The number is odd\n";
    return 0;
}
