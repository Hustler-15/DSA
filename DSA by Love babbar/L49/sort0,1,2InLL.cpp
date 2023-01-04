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

//<--------------------------------------------Approach 1--------------------------------------------->

Node* sortList(Node* head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data == 0)
        {
            zeroCount++;
        }
        else if(temp->data == 1)
        {
            oneCount++;
        }
        else if(temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while(temp!=NULL)
    {
        if(zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
            
        }
        else if(oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }

        temp = temp->next;
    }

    return head;
}

//<-------------------------------------------Approach 2--------------------------------------------->
void insertAtTail(Node* &tail, Node* curr)
{
    tail->next = curr;
    tail = curr;
}
Node* sortList1(Node* head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    //Creating seperate list
    Node* curr = head;
    while(curr!=NULL)
    {
        int value = curr->data;
        if(value == 0)
        {
            insertAtTail(zeroTail,curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail,curr);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }

    //Merging seperate list
    if(oneHead->next!=NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    //Setup Head
    head = zeroHead->next;

    //delete dummy
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}


//https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0