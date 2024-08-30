#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtTheEnd(Node *head, int value)
{
    Node *temp = new Node(value);
    // check if list is empty
    if (head == NULL)
    {
        head = temp;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
}
int main()
{
}