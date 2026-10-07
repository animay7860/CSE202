/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q; // Defined Queue using STL
    // Push---> Enqueue
    q.push(77);
    q.push(1);
    q.push(99);
    q.push(66);
    // cout << q.front() << endl;
    // Pop---> Dequeue
    // q.pop(); // Removing from the front of the Queue

    // cout << q.front() << endl;

    // Traversing the Queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}