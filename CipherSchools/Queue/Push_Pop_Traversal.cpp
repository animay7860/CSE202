/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    // Push---> Enqueue
    q.push(22);
    q.push(99);
    q.push(77);
    // cout << q.front() << endl;
    // // Pop---> Dequeue
    // q.pop();
    // cout << q.front() << endl;
    // Traverse the Queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}