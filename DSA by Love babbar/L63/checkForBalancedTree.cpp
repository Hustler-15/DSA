#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 
class Solution{
    public:
    int height(struct Node* node)
    {
        //Base case
        if(node == NULL)
            return 0;
            
        int left = height(node->left);
        int right = height(node->right);
        
        int ans = max(left,right)+1;
        
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root) // TC  O(n^2)
    {
        //  Base Case
        if(root == NULL)
            return true;
            
        int left = isBalanced(root->left);
        int right = isBalanced(root->right);
        
        int diff = abs(height(root->left)-height(root->right)) <=1;
        
        if(left && right && diff)
            return 1;
        else
            return false;
    }

    //Approach 2 : 
    pair<bool, int> isBalancedFast(Node* root)
    {
        //  Base Case
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
            
        pair<int, int> left = isBalancedFast(root->left) ;
        pair<int, int> right = isBalancedFast(root->right) ;  
        
        bool leftans = left.first;
        bool rightans = right.first;
        
        bool diff = abs(left.second-right.second) <=1;
        
        pair<bool, int> ans;
        ans.second = max(left.second,right.second)+1;
        
        if(leftans && rightans && diff)
            ans.first = true;
        else
            ans.first = false;
        
        return ans;   
    }
};

//https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1