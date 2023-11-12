#include <bits/stdc++.h>
using namespace std;
class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Approach1
bool searchInBST(BinaryTreeNode *root, int x)
{
    // Base case
    if (root == NULL)
        return false;

    if (root->data == x)
        return true;

    if (root->data > x)
        searchInBST(root->left, x);
    else
        searchInBST(root->right, x);
}
// Approach2
bool searchInBST1(BinaryTreeNode *root, int x)
{
    BinaryTreeNode *temp = root;

    while (temp != NULL)
    {
        if (temp->data == x)
            return true;
        if (temp->data > x)
        {
            temp = temp->left;
        }
        else
            temp = temp->right;
    }
    return false;
}
// https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878?leftPanelTab=1