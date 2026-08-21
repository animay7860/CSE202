/*Author :- Animay Prakash*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[5] = {100, 80, 2, 7};
    // arr[4]=88;
    vector<int> arr;
    arr.push_back(100);
    arr.push_back(200);
    arr.push_back(300);
    arr.push_back(677);
    arr.push_back(234567);
    arr.push_back(456789);
    cout << arr.size() << endl;

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}