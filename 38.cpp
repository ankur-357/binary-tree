// k distance from root
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void kdistance(Node *root, int k, vector<int> &v)
{
    if (!root)
    {
        return;
    }
    if (k == 0)
    {
        v.push_back(root->data);
        return;
    }
    kdistance(root->left, k - 1, v);
    kdistance(root->right, k - 1, v);
}