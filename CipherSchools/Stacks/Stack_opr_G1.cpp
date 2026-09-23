/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    // PUSH OPERATION
    st.push(88);
    st.push(34);
    st.push(12);
    st.push(19);
    // // TOP ELEMENT
    // cout << st.top() << endl;
    // // POP
    // st.pop();
    // cout << "******** " << "After Poping" << " ********" << endl;
    // cout << st.top() << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}