#include<iostream>
using namespace std;

//Creating Node
class node {
    public:
        int data;
        node* next;

        node(int data)
        {
            this -> data = data;
            this -> next = NULL;
        }

        ~node()
        {
            int value = data;
            //Memory free
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
        }
};

//Insert at head
void insertAtNode(node* &head, int d)
{
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

//Insert at Tail
void insertAtTail(node* &tail,int d)
{
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(node* &tail, node* &head, int position, int d)
{   //Insert at start
    if(position == 1)
{
    insertAtNode(head,d);
    return;
}   
    //Insert at particular position except start and end
    node* temp = head;
    int cnt = 1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    //Insert at end
    if(temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//To  print the list
void print(node* &head)
{
    node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}    

void deleteNode(int position, node* &head){
    //deleting first or start node
    if(position == 1){  
    node* temp = head;
    head = head->next;
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
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}

int main()
{
    
    
}