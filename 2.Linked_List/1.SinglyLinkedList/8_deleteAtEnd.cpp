#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deleteAtEnd(Node *&head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
        return;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = NULL;
    delete temp;
}

int main()
{
}