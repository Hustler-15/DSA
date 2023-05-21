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

pair<int, int> predecessorSuccessor(BinaryTreeNode *root, int key)
{ // Find key
    BinaryTreeNode *temp = root;
    int succ = -1;
    int pred = -1;

    while (temp->data != key)
    {
        if (temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;
        }
        else
        {
            pred = temp->data;
            temp = temp->right;
        }
    }
    // Pred
    BinaryTreeNode *leftTree = temp->left;
    while (leftTree != NULL)
    {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }
    // Succ
    BinaryTreeNode *rightTree = temp->right;
    while (rightTree != NULL)
    {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    pair<int, int> ans = make_pair(pred, succ);
    return ans;
}
// https://www.codingninjas.com/codestudio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1