/* Author: Animay Prakash */
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next_node_address;
    Node(int data)
    {
        this->data = data;
        this->next_node_address = nullptr;
    }
};
int main()
{
    Node *first_node = new Node(20);
    Node *second_node = new Node(10);
    Node *third_node = new Node(53);
    Node *fourth_node = new Node(39);
    // (*first_node).next_node_address = second_node;
    first_node->next_node_address = second_node;
    second_node->next_node_address = third_node;
    third_node->next_node_address = fourth_node;
    fourth_node->next_node_address = NULL;
    // First Node is called as Head
    Node *head = first_node;
    cout << first_node << endl;
    cout << second_node << endl;
    cout << third_node << endl;
    cout << fourth_node << endl;

    return 0;
}