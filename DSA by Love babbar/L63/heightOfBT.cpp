#include <iostream>
#include <queue>
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

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // base case
        if(node == NULL)
            return 0;
            
        int left = height(node->left);
        int right = height(node->right);
        
        int ans = max(left,right)+1;
        
        return ans;
    }
};
//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1