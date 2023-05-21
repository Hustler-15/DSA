#include <iostream>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    // Base case
    if (root == NULL)
        return NULL;

    if (root->data > P->data && root->data > Q->data)
        return LCAinaBST(root->left, P, Q);

    if (root->data < P->data && root->data < Q->data)
        return LCAinaBST(root->right, P, Q);

    return root;
}

// Optimized
TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    // Base case
    if (root == NULL)
        return NULL;

    while (root != NULL)
    {
        if (root->data > P->data && root->data > Q->data)
            root = root->left;

        else if (root->data < P->data && root->data < Q->data)
            root = root->right;

        else
        {
            return root;
        }
    }
}
// https://www.codingninjas.com/codestudio/problems/lca-in-a-bst_981280?leftPanelTab=0