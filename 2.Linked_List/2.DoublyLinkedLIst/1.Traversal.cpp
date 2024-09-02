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

int main()
{
}