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

Node *DeletionAtTheEnd(Node *head)
{
    if (head == NULL)
        return head;
    if (head->next == NULL)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
        return head;
    }

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
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
    head = DeletionAtTheEnd(head);

    forwardTraversal(head);
}