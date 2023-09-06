// left view

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
vector<int> LeftView(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    if (root == NULL)
        return ans;
    while (1)
    {
        int size = q.size();
        if (size == 0)
        {
            return ans;
        }
        int data = 0;
        while (size > 0)
        {
            Node *temp = q.front();
            q.pop();
            data = temp->data;

            if (temp->right != NULL)
            {
                q.push(temp->right);
            }

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            size--;
        }
        ans.push_back(data);
    }
    return ans;
}

class Solution {
public:
    void recursion(Node *root, int level, vector<int> &res)
    {
        if(root==NULL) return ;
        if(res.size()==level) res.push_back(root->data);
        recursion(root->left, level+1, res);
        recursion(root->right, level+1, res);
    }
    
    vector<int> leftSideView(Node *root) {
        vector<int> res;
        recursion(root, 0, res);
        return res;
    }
};
int main()
{
}