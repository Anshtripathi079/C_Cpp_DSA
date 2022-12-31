#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left=right=NULL;
    }
};

//in-order traversal
void inorder(struct node* root){
    if(root!= NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//pre-order traversal in tree
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// post-order traversal
void postorder(struct node* root){
     if(root==NULL){
        return;
     }
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" ";
}

int main(){
    struct node * root = new node(1);

    root->left = new node(2);
    root->right = new node(3);
    root-> left->right = new node(5);
    inorder(root);
    preorder(root);
    postorder(root);
}
