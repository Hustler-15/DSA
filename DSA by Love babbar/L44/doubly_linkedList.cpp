#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        //Constructor
        Node(int d)
        {
            this->data = d;
            this->next = NULL;
            this->prev = NULL;

        }

        ~Node()
        {
            int value = data;
            //Memory free
            if(this->next != NULL)
            {
                delete next;
                next = NULL;
            }
        }
};

//Traversing the linked list
void print(Node* head)
{    Node* temp = head;
     while(temp != NULL)
     {
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;

}

//To find length of linked list
int getLength(Node* head)
{
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {   len++;
        temp = temp->next;
        
    }
    return len;
}

//Inserting at head
void insertAtHead(Node* &tail, Node* &head, int d)
{   //empty list
    if(head==NULL)
    {
        Node* temp = new Node(d);
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }

}

//Inserting at tail
void insertAtTail(Node* &tail,Node* &head, int d)
{   //empty list
    if(tail==NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

//Inserting at a position
void insertAtPosition(Node* tail, Node* head, int position, int d)
{   //Insert at start
    if(position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(tail, head, d)
    }

    Node* newToInsert = new Node(d);
    newToInsert->next = temp->next;
    temp->next->prev = newToInsert;
    temp->next = newToInsert;
    newToInsert->prev =temp; 

    



}

void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position == 1){  
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
}
    else{ //Delete any position or last node
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt<position)
        {
            prev = curr;
            curr = curr->next;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 13);
    print(head);

    insertAtHead(head, 8);
    print(head);

    insertAtTail(tail, 25);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

    insertAtPosition(tail, head, 7, 102);
    print(head);

    deleteNode(1, head);
    print(head);

    return 0;
}