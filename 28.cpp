//count total nodes in complete Binary tree

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void inOrder(Node* curr, int &count){
    if(curr==NULL){
        return;
    }
    count++;
    inOrder(curr->left, count);
    inOrder(curr->right, count);

}
int findHeightLeft(Node* curr){
    int height = 0;
    while (curr)
    {
        height++;
    }
    return height;
    
}

int findHeightRight(Node* curr){
    int height =0;
    while (curr)
    {
        height++;
        curr = curr->right;
    }
    return height;
    
}
int coutNodes(Node* root){
    if(root==NULL) return 0;
    int lh = findHeightLeft(root);
    int rh = findHeightRIght(root);
    if(lh==rh) return ()
}