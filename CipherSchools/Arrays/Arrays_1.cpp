/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string words[100];
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    char letter;
    cin >> letter;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (words[i][0] == letter)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
