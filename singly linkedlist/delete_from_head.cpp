
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int v)
    {
        val = v;
        next = NULL;
    }
};

void delete_head(Node* &head)
{
    if(head == NULL)
    {
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void print(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    delete_head(head);

    print(head);

    return 0;
}
