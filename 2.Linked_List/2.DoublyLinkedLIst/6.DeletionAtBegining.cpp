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

void DeletionAtTheBegining(Node *&head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    head = temp->next;
    if (head != NULL)
        head->prev = NULL;
    delete temp;
    return;
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
    DeletionAtTheBegining(head);

    forwardTraversal(head);
}