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

int main()
{
    Node *head = new Node(5);
    InsertionAtTheBegining(head, 1);
    forwardTraversal(head);
}