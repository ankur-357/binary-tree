// Invert a Binary Tree

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *invertTree(Node *root)
{
    // Base Case
    if (root == NULL)
        return NULL;
    invertTree(root->left);  // Call the left subtree
    invertTree(root->right); // Call the right subtree
    // Swap the nodes
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    return root; // Return the root
}