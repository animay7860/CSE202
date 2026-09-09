/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // Number of Students
    cin >> n;
    int m; // Number of Subjects
    cin >> m;
    for (int i = 0; i < n; i++) // Number of Students;
    {
        vector<int> marks(m);
        for (int j = 0; j < m; j++) // Marks of each Student in Every Subject
        {
            cin >> marks[j];
        }
        cout << "Student " << i + 1 << ": ";
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + marks[j];
        }
        cout << sum / m << endl;
    }
    return 0;
}