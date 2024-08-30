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

void deleteAtPos(Node *&head, int pos)
{
    // check pos is valid
    if (head == NULL || pos < 1)
        return;
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL || curr->next == NULL)
        return;
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    cout << "gg" << endl;
}

int main()
{
}