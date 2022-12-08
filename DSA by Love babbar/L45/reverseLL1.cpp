#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL; 
    }

    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for data and value is "<<value<<endl;
    }
};

Node* reverseLinkedList(Node* head)
{
    {
    if(head == NULL || head->next==NULL)
    {
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr->next!=NULL)
    {
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
}