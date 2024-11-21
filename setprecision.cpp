#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n = 23.45678;
    cout << "Before precisions: " << n << endl;
    cout << "After Precisions: " << fixed << setprecision(2) << n << endl;
    return 0;
}
