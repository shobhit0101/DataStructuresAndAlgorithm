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