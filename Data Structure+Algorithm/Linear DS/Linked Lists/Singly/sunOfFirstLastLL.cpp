/*
    Program to add first and last item of linklist and update these items with the sum
    using recursion.
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next = NULL;
} *head;

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node * func(Node *ptr1, Node *ptr2)
{
    if (ptr2->next != NULL && ptr2->next->next != NULL)
    {
        ptr2 = func (ptr1->next, ptr2->next->next);
    }
    else if (ptr2->next != NULL && ptr2->next->next == NULL)
    {
        ptr2 = ptr1->next;
    }
    else
    {
        ptr2 = ptr1;
    }
    // cout << "ptr1->data = " << ptr1->data << endl;
    // cout << "ptr2->data = " << ptr2->data << endl;
    int sum = ptr1->data + ptr2->data;
    // cout << "sum = " << sum << endl;
    ptr1->data = sum;
    ptr2->data = sum;
    // cout << endl;
    // cout << "ptr1->data = " << ptr1->data << endl;
    // cout << "ptr2->data = " << ptr2->data << endl;
    // display(head);
    // cout << endl;
    // cout << endl;
    return ptr2->next;
}

void insert(Node **head_ref, int data)
{
    Node *last = *head_ref;
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    return;
}

int main(void)
{
    // Node *head = NULL;
    insert(&head, 10);
    insert(&head, 9);
    insert(&head, 5);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 1);
    insert(&head, 6);
    display(head);
    cout << endl;
    Node *ptr1 = new Node();
    Node *ptr2 = new Node();
    ptr1 = head;
    ptr2 = head;
    ptr2 = func(ptr1, ptr2);
    display(head);

    // 9996626001
}
