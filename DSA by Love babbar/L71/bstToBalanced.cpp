#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};
void inorder(TreeNode<int> *root, vector<int> &inorderVal)
{
    if (root == NULL)
        return;

    inorder(root->left, inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right, inorderVal);
}

TreeNode<int> *inorderToBst(int s, int e, vector<int> in)
{
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    TreeNode<int> *root = new TreeNode<int>(in[mid]);
    root->left = inorderToBst(s, mid - 1, in);
    root->right = inorderToBst(mid + 1, e, in);
    return root;
}

TreeNode<int> *balancedBst(TreeNode<int> *root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);
    int n = inorderVal.size() - 1;

    return inorderToBst(0, n, inorderVal);
}
// https://www.codingninjas.com/codestudio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=1