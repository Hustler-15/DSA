#include <iostream>
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
int solve(BinaryTreeNode *root, int &i, int k)
{
    // Base case
    if (root == NULL)
        return -1;

    int left = solve(root->left, i, k);
    if (left != -1)
        return left;
    i++;
    if (i == k)
        return root->data;
    return solve(root->right, i, k);
}
int kthSmallest(BinaryTreeNode *root, int k)
{
    int i = 0;
    int ans = solve(root, i, k);
    return ans;
}
// https://www.codingninjas.com/codestudio/problems/find-k-th-smallest-element-in-bst_1069333?leftPanelTab=1