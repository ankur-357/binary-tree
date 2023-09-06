// print all nodes at d distance of k in binary tree

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void markParents(Node *root, unordered_map<Node *, Node *> &parent_track, Node *target)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();
            if (current->left)
            {
                parent_track[current->left] = current;
                q.push(current->left);
            }
            if (current->right)
            {
                parent_track[current->right];
                q.push(current->right);
            }
        }
    }
}
vector<int> distanceK(Node* root, Node* target, int k){
    unordered_map<Node*, Node*> parent_track;
    markParents(root, parent_track, target);
    unordered_map<Node* , bool> visited;
    queue<Node*> q;
    q.push(target);
    visited[target] = true;
    int curr_level =0;
    while (!q.empty())
    {
        int size = q.size();
        if(curr_level ++==k) break;
        for (int i = 0; i < size; i++)
        {
            Node* current = q.front();
            q.pop();
            
        }
        
    }
    
}