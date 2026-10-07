/* Author: Animay Prakash */
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    // Use ofstream for writing;
    // ofstream c("abc.txt");
    // // Inside KJ.txt we need to write something
    // c << 2 + 2 << endl;
    // c << "Hii Animay we are Learning File Handling" << endl;
    // c << "Tejendra ask to append" << endl;
    // c.close();
    // cout<<"Hii This Animay"<<endl; console output
    // string content, content2;
    ifstream ap("KJ.txt");
    // int a;
    // cin>>a;
    string content, content2, content3;
    // ap >> content; //This will print a single word
    // cout<<content<<endl;
    // getline(ap, content); // It will print the entire line
    // getline(ap, content2);
    // getline(ap, content3);
    // cout << content << endl;
    // cout << content2 << endl;
    // cout << content3 << endl;
    // while (getline(ap, content)) // return false at line number 9
    // {
    //     cout << content << endl;
    // }
    while (!ap.eof())

    {
        ap >> content;
        cout << content << endl;
    }

    // cout << content2 << endl;

    return 0;
}