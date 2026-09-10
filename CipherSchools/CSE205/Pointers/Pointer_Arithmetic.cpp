/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {5, 8, 6, 9, 12};
    int *ptr = arr;
    cout << &arr[4] << endl;
    cout << ptr << endl;
    cout << *(ptr + 4) << endl;
    // pointer is pointing to the first element of the array
    return 0;
}