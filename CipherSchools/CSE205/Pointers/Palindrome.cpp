/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    string cpy = str;
    reverse(str.begin(), str.end());
    if (cpy == str)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}