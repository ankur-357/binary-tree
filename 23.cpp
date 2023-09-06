// print root to given node path

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

bool getPath(Node *root, vector<int> &arr, int x)
{
    // if root is NULL there is no path
    if (!root)
        return false;
    // push the node's value in array
    arr.push_back(root->data);
    // if it is the required node return true
    if (root->data == x)
        return true;

    // else check whether the required node lies in the left subtree or right subtree of the current node
    if (getPath(root->left, arr, x) || getPath(root->right, arr, x))
    {
        return true;
    }
    // required node does not lie either in the left or right subtree of the current node  thus remove current node's value from arr and then return false

    arr.pop_back();
    return false;
}
int main()
{
}