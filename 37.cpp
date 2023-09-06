// Root to leaf Maximum path sum
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void findSum(Node *root, int curr_sum, int max)
{
    if (!root)
        return;
    curr_sum += root->data;
    if (!root->left && !root->right && curr_sum > max)
    {
        max = curr_sum;
    }
    findSum(root->left, curr_sum, max);
    findSum(root->right, curr_sum, max);
}