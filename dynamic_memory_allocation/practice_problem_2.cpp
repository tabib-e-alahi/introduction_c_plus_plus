#include<bits/stdc++.h>
using namespace std;
int* get_array(int n)
{
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *a = get_array(n);
    int m;
    cin >> m;
    int *b = new int[m];
    // copy array a to array b
    for(int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    delete[] a;
    for(int i = n; i < m; i++)
    {
        cin >> b[i];
    }
    for(int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}

