#include <iostream>
#include <queue>
using namespace std;

void inorder(BinaryTreeNode<int> *root, int &count)
{
    // Base case
    if (root == NULL)
        return;

    inorder(root->left, count);
    if (root->left == NULL && root->right == NULL)
        count++;
    inorder(root->right, count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}
// https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTab=1