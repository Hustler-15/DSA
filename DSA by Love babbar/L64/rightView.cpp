#include <iostream>
#include <vector>
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
    void solve(Node *root, vector<int> &ans, int level)
    {
        if (root == NULL)
            return;

        if (level == ans.size())
            ans.push_back(root->data);

        solve(root->right, ans, level + 1);
        solve(root->left, ans, level + 1);
    }
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        solve(root, ans, 0);
        return ans;
    }
};
// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1