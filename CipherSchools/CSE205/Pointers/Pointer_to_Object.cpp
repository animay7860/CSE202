/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

class sectionKJ
{
public:
    string FullName;
    int rollNo;
};
int main()
{
    sectionKJ Aditya;
    sectionKJ *ptr = &Aditya;
    // (*ptr).FullName = "Aditya Yadav";
    ptr->FullName = "Aditya Yadav";
    // (*ptr).rollNo = 23456789;
    ptr->rollNo = 23456789;

    cout << Aditya.FullName << endl;
    return 0;
}