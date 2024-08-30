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

void deleteAtBegining(Node *&head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    head = temp->next;
    delete temp;
}
int main()
{
}