/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    // Pushing elements onto Stacks
    st.push(77);
    st.push(5);
    st.push(6);
    st.push(-10);
    st.push(57);
    st.push(64);
    // Seeing Which Element is Last in And First out
    // cout << st.top() << endl;
    // // For Removing Elements from Stack
    // st.pop();
    // cout << "After POP" << "\n";
    // cout << st.top() << endl;
    // traversing
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}