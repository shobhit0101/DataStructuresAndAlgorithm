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

void InsertAtPos(Node *&head, int d, int pos)
{
    Node *temp = new Node(d);
    if (pos == 1)
    {
        temp->next = head;
        if (head != NULL)
        {
            head->prev = temp;
        }
        head = temp;
        return;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "pos is invalid" << endl;
        return;
    }
    temp->prev = curr;
    temp->next = curr->next;
    curr->next = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = temp;
    }
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

    forwardTraversal(head);
}