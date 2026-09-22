/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    vector<vector<int>> mat(3, vector<int>(3, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}