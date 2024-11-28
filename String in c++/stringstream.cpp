/*
its create a stream of words from the given string, very helpful when need to work with words in a string
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; // consider s = tabib e alahi
    getline(cin,s);
//    cout << s << endl;
    stringstream ss(s); // it will create a stream of words
    string word; // initializing a empty string to store each word
    //ss >> word; // it will print tabib
//    cout << word << endl;
    //ss >> word; // it will print e
//    cout << word << endl;
    //ss >> word; // it will print alahi
//    cout << word << endl;
    int countWords = 0;
    /*what it: we have a large stream of words, so we can use while loop for iterators over those stream:*/
    while(ss >> word) // the loop will work till theres a word coming from stream
    {
        countWords++;
        cout << word<<endl;
    }

    cout <<"Total words: " << countWords;
    return 0;
}
