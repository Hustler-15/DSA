#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;    
    }
};

Node* insertIntoBst(Node* &root, int data)
{
    //Base case
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(data>root->data)
    {
        root->right = insertIntoBst(root->right,data);
    }
    else{
        root->left = insertIntoBst(root->left,data);
    }
    return root;

}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=1)
    {
        insertIntoBst(root, data);
        cin>>data;
    }
}

void main(){
    Node* root = NULL;
    cout<<"Enter data to make bst"<<endl;
    takeInput(root);
}