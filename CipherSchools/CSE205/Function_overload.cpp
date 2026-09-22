/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;
class operation
{
public:
    int a;
    int b;
    int c;
    // operation(int a, int b, int c)
    // {
    //     this->a = a;
    //     this->b = b;
    //     this->c = c;
    // }
    void add(int a, int b)
    {
        cout << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
};
int main()
{
    operation a;
    a.add(4, 5);
    a.add(77, 77, 66);

    return 0;
}