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

Node* kReverse(Node* head, int k) {
    //Base call
    if(head==NULL)
    {
        return NULL;
    }
    //step1:Reverse k nodes 
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    
    while(curr!=NULL && count<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //Recursive call
    if(next!=NULL)
    {
        head->next = kReverse(next,k);
    }
    
    //step3: Return head of list
    return prev;
    
    
}