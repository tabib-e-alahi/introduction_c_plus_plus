#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    /*
    int x = 10, y = 5;
    cout << max(x, y) << endl;
    cout << min(x, y) << endl;
    */
    int w = 9, x = 10, y = 1, z = 54;
    cout << max({w, x, y, z}) << endl;
    cout << min({w, x, y, z}) << endl;
    swap(x, y);
    cout << x << " " << y<< endl;
    return 0;
}
