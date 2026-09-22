/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;
class KJ
{
public:
    string name;
    int roll_No;
    static int count;

    KJ()
    {
        count++;
        cout << "The Object number is " << count << endl;
    }
};
int KJ::count = 0;
int main()
{
    KJ Animay;
    KJ Aditya;
    KJ Nischal;

    return 0;
}