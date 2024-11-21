#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int *b = new int[7];
    for(int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    delete[] a; // deleting array a after copying to b
    b[5] = 10;
    b[6] = 7;
    for(int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
}
