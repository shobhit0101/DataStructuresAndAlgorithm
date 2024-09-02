#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

void InsertionAtTheEnd(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
}
int main()
{
    Node *head = NULL;
    InsertionAtTheEnd(head, 7);
    forwardTraversal(head);
}