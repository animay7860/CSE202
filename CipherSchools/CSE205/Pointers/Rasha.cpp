/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> merge;

    for (int i = 0; i < n1; i++)
    {
        merge.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        merge.push_back(arr2[i]);
    }

    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merge[i] << endl;
    }
    return 0;
}