/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    // n-> Row Size
    // m-> Column Size
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "*************" << " Primary Diagonal Elements " << "*************" << endl;
    for (int row = 0; row < n; row++) // Row
    {
        for (int col = 0; col < m; col++) // Col
        {
            if (col == row)
            {
                cout << mat[row][col] << " ";
            }
        }
    }
    cout << endl;
    cout << "*************" << " Secondary Diagonal Elements " << "*************" << endl;

    for (int row = 0; row < n; row++) // Row
    {
        for (int col = 0; col < m; col++) // Col
        {
            if (col + row == n - 1)
            {
                cout << mat[row][col] << " ";
            }
        }
    }
    return 0;
}