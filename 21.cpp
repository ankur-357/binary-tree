// check for symmetrical Binary Tree

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

bool isSymmetricUtil(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    else
    {
        return (root1->data == root2->data && isSymmetricUtil(root1->left, root2->right) && isSymmetricUtil(root1->right, root2->left));
    }
}
bool isSymmetric(struct Node *root)
{
    if (!root)
    {
        return true;
    }
    return isSymmetricUtil(root->left, root->right);
}
int main()
{
}