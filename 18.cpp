// max path sum

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int findMaxPathSum(Node *root, int &maxi)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftMaxPath = max(0, findMaxPathSum(root->left, maxi));
    int rightMaxPath = max(0, findMaxPathSum(root->right, maxi));
    int val = root->data;
    maxi = max(maxi, (leftMaxPath + rightMaxPath + val));
}

int main()
{
}