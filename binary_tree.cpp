#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
void preorder(node* root){
     if (root != NULL) {

      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
   }
}
void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        
        inorder(root->right);
        
    }
}
void postorder(node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    preorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    inorder(root);
    return 0;
}
