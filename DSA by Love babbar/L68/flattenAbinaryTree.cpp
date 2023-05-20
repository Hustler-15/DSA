#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
class Solution
{
public:
    void flatten(Node *root)
    {
        Node *curr = root;
        while (curr != NULL)
        {
            if (curr->left)
            {
                Node *pred = curr->left;
                while (pred->right != NULL)
                {
                    pred = pred->right;
                }
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};
// https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1
// Coverting binary tree to linked list