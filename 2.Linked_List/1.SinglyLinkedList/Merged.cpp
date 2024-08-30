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

void Traversal(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << endl;
}

bool searching(Node *head, int target)
{
    while (head != NULL)
    {
        if (head->data == target)
            return true;
        head = head->next;
    }
    return false;
}

int size_of_list(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

void InsertionAtTheBegining(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}
void InsertAtTheEnd(Node *head, int value)
{
    Node *temp = new Node(value);
    // check if list is empty
    if (head == NULL)
    {
        head = temp;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
}

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

void deleteAtBegining(Node *&head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    head = temp->next;
    delete temp;
}

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
    Node *newNode = new Node(20);
    Node *head = newNode;
    InsertionAtTheBegining(head, 2);
    InsertionAtTheBegining(head, 4);
    InsertionAtTheBegining(head, 6);
    InsertionAtTheBegining(head, 8);
    InsertAtTheEnd(head, 34);
    InsertNodeAtPos(head, 0, 45);
    InsertNodeAtPos(head, 6, 26);
    InsertNodeAtPos(head, 57, 16);
    // deleteAtBegining(head);
    // deleteAtEnd(head);
    deleteAtPos(head, 3);

    Traversal(head);
}