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

void InsertNodeAtPos(Node *&head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *current = head;
    int size = size_of_list(head);
    // case 1: when pos == 0
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    // case 2: when  1 < pos <= size
    else if (pos <= size)
    {
        while (--pos)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    else
        cout << "Invalid Input" << endl;
}
int main()
{
}