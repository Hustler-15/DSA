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
}

void insertNode(Node* tail, int element, int d)
{
    //Empty list
    if(tail==NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //assuming the element is present
        Node* curr = tail;
        while(curr->data!=element)
        {
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail)
{
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail!=temp)
    
}
void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

int main()
{   Node* tail = NULL;
    insertNode(tail, 5, 3);
    print(tail;)

    insertNode(tail, 3, 5);
    print(tail;)

    insertNode(tail, 5, 7);
    print(tail;)

    insertNode(tail, 7, 9);
    print(tail;)

    insertNode(tail, 5, 6);
    print(tail;)

    insertNode(tail, 9, 10);
    print(tail;)

    insertNode(tail, 3, 4);
    print(tail;)

    return 0;
}

//https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms?source=youtube&campaign=YouTube_CodestudioLovebabbar23rdJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar23rdJan