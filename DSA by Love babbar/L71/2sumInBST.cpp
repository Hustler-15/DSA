#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
void inorder(BinaryTreeNode<int> *root, vector<int> &inorderVal)
{
    if (root == NULL)
        return;

    inorder(root->left, inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right, inorderVal);
}
bool twoSumInBST(BinaryTreeNode<int> *root, int target)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);
    int s = 0;
    int e = inorderVal.size() - 1;
    while (s < e)
    {
        int sum = inorderVal[s] + inorderVal[e];
        if (sum == target)
        {
            return true;
        }
        else if (sum > target)
            e--;
        else
            s++;
    }
    return false;
}
// https://www.codingninjas.com/codestudio/problems/two-sum-in-a-bst_1062631?leftPanelTab=1