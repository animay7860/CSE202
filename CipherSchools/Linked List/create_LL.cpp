/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;
// Create Node
class Node
{
public:
    int data;
    Node *next_node_address;
    Node(int data)
    {
        this->data = data;
        this->next_node_address = NULL;
    }
};

int main()
{
    Node *first_node = new Node(10);
    Node *second_node = new Node(20);
    Node *third_node = new Node(30);
    first_node->next_node_address = second_node;
    second_node->next_node_address = third_node;
    cout << second_node->next_node_address << endl;

    return 0;
}