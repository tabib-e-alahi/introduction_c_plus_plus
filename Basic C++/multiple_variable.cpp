#include<iostream>
int main()
{
    int x = 10;
    char ch = 'A';
    double n = 3.567;
    std :: cout << x << " " << ch << " " << n;
    // for adding a new line two ways can be used:
    //way 1:
    std :: cout << x << " " << ch << " " << n << "\n";
    //way 2:
    std :: cout << x << " " << ch << " " << n << std::endl;
    return 0;
}
