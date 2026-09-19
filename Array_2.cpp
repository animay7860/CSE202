/*Author :- Animay Prakash*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(88);
    arr.push_back(77);
    arr.push_back(56);
    // cout<<arr[2]<<endl;
    arr.push_back(0);
    // cout<<arr[3]<<endl;
    cout << arr.size() << endl;

    // travelling an Vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}