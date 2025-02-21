#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int minBoxes(string &s) {
    int vowels = 0, consonants = 0, digits = 0;
    for (char ch : s) {
        if (isdigit(ch)) digits++;
        else if (isVowel(ch)) vowels++;
        else consonants++;
    }
    
    int v = vowels / 2 + vowels % 2;
    int c = (consonants / 3) + (consonants % 3 != 0 ? 1 : 0);
    int d = digits;
    
    int mx = max(v, c);
    mx = max(mx, d);
    
    
    return mx;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minBoxes(s) << endl;
    }
    
    return 0;
}
