// Serialize Binary Tree
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Encodes a tree to a single string.
// Function to serialize a tree and return a list containing nodes of tree.
vector<int> serialize(Node *root)
{
    // Your code here
    vector<int> ans;
    if (root == NULL)
        return {};
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
            ans.push_back(-1);
        else
            ans.push_back(curr->data);
        if (curr)
        {
            q.push(curr->left);
            q.push(curr->right);
        }
    }
    return ans;
}
