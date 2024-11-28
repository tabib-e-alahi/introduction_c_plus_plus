#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey;
    string country;

    Cricketer(string country, int jersey)
    {
        this -> country = country;
        this ->jersey = jersey;
    }
};
int main()
{
    Cricketer* dhoni = new Cricketer("India", 7);
    Cricketer* kohli = new Cricketer("India", 18);

    // now copy dhoni to kohli
    *kohli = * dhoni;
    delete dhoni;
    cout << "Country: " << kohli->country << " Jersey Number: " << kohli->jersey << endl;
    return 0;
}



