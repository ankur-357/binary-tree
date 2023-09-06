// check for subtree in a BInary Tree

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

bool isIdenticalUtil(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    else
    {
        return (root1->data == root2->data && isIdenticalUtil(root1->left, root2->left) && isIdenticalUtil(root1->right, root2->right));
    }
}
bool isIdentical(Node *r1, Node *r2)
{
    // Your Code here
    return isIdenticalUtil(r1, r2);
}
void function(Node *root1, Node *root2)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->data == root2->data)
        {
            bool isIdentical = isIdentical(temp, root);
            if (isIdentical)
            {
                return true;
            }
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    return false;
}