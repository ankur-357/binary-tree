// Boundary Traversal

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void lb(Node *root, vector<int> &v)
{
    if (!root)
        return;
    if (root->left || root->right)
    {
        v.push_back(root->data);
    }
    if (root->left)
    {
        lb(root->left, v);
    }
    else if (root->right)
    {
        lb(root->right, v);
    }
}
void rb(Node *root, vector<int> &v)
{
    if (!root)
    {
        return;
    }
    if (root->right)
        rb(root->right, v);
    else if (root->left)
        rb(root->left, v);

    if (root->left || root->right)
    {
        v.push_back(root->data);
    }
}
void leafNode(Node *root, vector<int> &v)
{
    if (!root)
    {
        return;
    }
    leafNode(root->left, v);
    if (!root->left && !root->right)
    {
        v.push_back(root->data);
    }
    leafNode(root->right, v);
}
vector<int> boundary(Node *root)
{
    vector<int> v;
    if (!root)
    {
        return v;
    }
    v.push_back(root->data);
    if (!root->left && root->right)
        return v;
    lb(root->left, v);
    leafNode(root, v);
    rb(root->right, v);
    return v;
}
int main()
{
}