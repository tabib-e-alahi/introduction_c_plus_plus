#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //consider array as [5, 4, 3, 2, 1]

    //sort(a, a+n);// it will sort the numbers between a = 0 upto a+n = 0 + 5 = 5 , mean index--> 0, 1, 2, 3, 4
    //Output: 1 2 3 4 5

    //sort(a, a+n-1);// it will sort the numbers between a = 0 upto a+n = 0 + 5-1 = 4 , mean index--> 0, 1, 2, 3
    //Output: 2 3 4 5 1

    sort(a+2, a+n); // it will sort the numbers between a = 2 upto a+n = 0 + 5= 5, mean index-->2, 3, 4
    //Output: 5 4 1 2 3

//    if want in descending
//sort(a, a+n, greater<int>());
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
