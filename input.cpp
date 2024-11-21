/*#include<iostream>
int main()
{
    int x;
    std :: cin >> x;
    std :: cout << "The input number is: " << x <<std::endl;
    return 0;
}*/

// we are using std many times , we can define this in header to reduced reuse
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << "The input number is: " << x <<endl;
    return 0;
}
