#include <bits/stdc++.h>
using namespace std;

int getChocolates(int chocolates, int wrappers) {
    if (wrappers < 3) {
        return chocolates;
    }
    int newChocolates = wrappers / 3;
    int remainingWrappers = wrappers % 3;
    return getChocolates(chocolates + newChocolates, newChocolates + remainingWrappers);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int chocolates = n / 5; 
        cout << getChocolates(chocolates, chocolates) << endl;
    }
    return 0;
}
