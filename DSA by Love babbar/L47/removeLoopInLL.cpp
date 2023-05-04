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

Node* floydDetectLoop(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast)
        {
            return slow;
        }
    }
    return NULL;


}

Node* getStartingNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    if(intersection == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    while(slow!=intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

Node* removeLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* startOfLoop = getStartingNode(head);
    if(startOfLoop == NULL)
    {
        return head;
    }
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

//https://www.codingninjas.com/codestudio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0