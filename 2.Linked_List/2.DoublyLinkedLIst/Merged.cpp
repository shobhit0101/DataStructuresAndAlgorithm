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

void forwardTraversal(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << endl;
}

void backwardTraversal(Node *tail)
{
    Node *curr = tail;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->prev;
    }
    cout << endl;
}

int sizeOfList(Node *head)
{
    Node *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

void InsertionAtTheBegining(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }
    head = temp;
}

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