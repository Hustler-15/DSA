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
int findPosition(int in[], int element, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (in[i] == element)
        {
            return i;
        }
    }
    return -1;
}
Node *solve(int in[], int post[], int &index, int inOrderStart, int inOrderEnd, int n)
{
    if (index < 0 || inOrderStart > inOrderEnd)
    {
        return NULL;
    }
    int element = post[index--];
    Node *root = new Node(element);
    int position = findPosition(in, element, n);

    root->right = solve(in, post, index, position + 1, inOrderEnd, n);
    root->left = solve(in, post, index, inOrderStart, position - 1, n);

    return root;
}
// Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n)
{
    int postOrderIndex = n - 1;
    Node *ans = solve(in, post, postOrderIndex, 0, n - 1, n);
    return ans;
}
// https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1