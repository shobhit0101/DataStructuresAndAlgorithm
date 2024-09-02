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

Node *DeletionAtPos(Node *head, int pos)
{
    if (head == NULL)
        return head;
    Node *curr = head;
    for (int i = 1; i < pos && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
        return head;

    if (curr->prev != NULL)
    {
        curr->prev->next = curr->next;
    }
    if (curr->next != NULL)
    {
        curr->next->prev = curr->prev;
    }
    if (head == curr)
        head = curr->next;
    delete curr;
    return head;
}

int main()
{
    Node *head = NULL;
    InsertionAtTheBegining(head, 1);
    InsertionAtTheEnd(head, 7);
    InsertionAtTheEnd(head, 5);
    InsertionAtTheEnd(head, 2);
    InsertionAtTheEnd(head, 8);
    InsertAtPos(head, 5, 3);
    head = DeletionAtPos(head, 1);

    forwardTraversal(head);
}