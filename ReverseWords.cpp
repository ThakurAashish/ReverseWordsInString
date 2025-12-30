#include <bits/stdc++.h>
using namespace std;

void reverseWord(string &str)
{
    // split the string into an of words
    istringstream ss(str);
    string word;
    vector<string> arr;
    while (ss >> word)
        arr.push_back(word);

    // Reverse arrray of word
    reverse(arr.begin(), arr.end());

    // join the words in reverse order
    str = " ";
    for (string &s : arr)
        str += (s + " ");
}
int main()
{
    string str = " Ji Good Morning  ";
    reverseWord(str);
    cout << str;
    return 0;
}