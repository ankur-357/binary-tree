// check for identical binary tree

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
int main()
{
}