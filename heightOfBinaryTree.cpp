#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
int main(){
    
    node* root= new node();root->data=1;
    root->left= new node();root->left->data=2;
    root->right=new node();root->right->data=3;
    root->left->left=new node();root->left->left->data=4;
    root->left->right=new node();root->left->right->data=5;
    root->right->left=new node();root->right->left->data=6;
    root->right->right=new node();root->right->right->data=7;
    return 0;
}