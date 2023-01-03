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

Node * uniqueSortedList(Node * head) {
    if(head == NULL)
    {
        return NULL;
    }
    Node* curr = head;
    while(curr!=NULL)
    {
        if((curr->next!=NULL) && (curr->data == curr->next->data))
        {
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
//https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=0