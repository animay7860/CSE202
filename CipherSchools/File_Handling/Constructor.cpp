/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;
class Student_KJ
{
public:
    int roll_no;
    string name;
    Student_KJ() // Default Constructor
    {            // Constructor don't have any return type
        cout << "Constructor Called Automatically" <<endl;
    }
    ~Student_KJ()
    {
        cout << "Destructor is Called";
    }
    // Student_KJ(int roll_no, string name)
    // {
    //     this->name = name;
    //     this->roll_no = roll_no; // it creates Confusion
    // }
    // // Copy Constructor
    // Student_KJ(Student_KJ &obj)
    // {
    //     name = obj.name;
    //     roll_no = obj.roll_no;
    // }
};
int main()
{
    Student_KJ ap;
    // Student_KJ Animay(68812, "Animay Prakash");
    // Student_KJ Aditya = Animay;
    // cout << Aditya.name << endl;
    // cout << Aditya.roll_no << endl;
    return 0;
}