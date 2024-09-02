#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void Traversal(Node *last)
{
    if (last == NULL)
        return;
    Node *curr = last->next;
    while (true)
    {
        cout << curr->data << "->";
        curr = curr->next;
        if (curr == last->next)
            break;
    }
    cout << endl;
}

Node *InsertionInEmptyList(Node *last, int d)
{
    Node *newNode = new Node(d);
    newNode->next = newNode;
    last = newNode;
    return last;
}

Node *InsertionAtTheBegining(Node *last, int d)
{
    Node *newNode = new Node(d);
    if (last == NULL)
    {
        newNode->next = newNode;
        last = newNode;
        return last;
    }
    newNode->next = last->next;
    last->next = newNode;
    return last;
}

Node *InsertionAtTheEnd(Node *last, int d)
{
    Node *newNode = new Node(d);
    if (last == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}

Node *InsertAtPos(Node *last, int d, int pos)
{
    Node *newNode = new Node(d);
    if (last == NULL)
    {
        if (pos != 1)
        {
            cout << "Invalid Position" << endl;
        }
        newNode->next = newNode;
        return newNode;
    }
    if (pos == 1)
    {
        newNode->next = last->next;
        last->next = newNode;
        return newNode;
    }
    Node *curr = last->next;
    for (int i = 1; i < pos - 1; i++)
    {
        curr = curr->next;
        if (curr == last->next)
        {
            cout << "Invalid position" << endl;
            return last;
        }
    }
    newNode->next = curr->next;
    curr->next = newNode;
    if (curr == last)
        last = newNode;
    return last;
}

int main()
{
    Node *last = NULL;
    last = InsertionInEmptyList(last, 1);
    last = InsertionAtTheBegining(last, 2);
    last = InsertionAtTheBegining(last, 3);
    last = InsertionAtTheBegining(last, 4);
    last = InsertionAtTheBegining(last, 5);
    last = InsertionAtTheEnd(last, 8);
    last = InsertAtPos(last, 7, 3);
    Traversal(last);
}