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
int main()
{
}
