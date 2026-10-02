/* Author: Animay Prakash */
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    // Use ofstream for writing;
    ofstream Animay("KJ.txt");
    // Inside KJ.txt we need to write something
    Animay << 2 + 2 << endl;
    Animay << "Hii Animay we are Learning File Handling" << endl;
    Animay << "Tejendra ask to append" << endl;
    Animay.close();
    string content, content2;
    ifstream file("KJ.txt");
    // file >> content; This will print a single word

    // getline(file, content); // It will print the entire line
    // getline(file, content2);
    // while (getline(file, content))
    // {
    //     cout << content << endl;
    // }
    while (!file.eof())

    {
        file >> content;
        cout << content << endl;
    }

    // cout << content2 << endl;

    return 0;
}