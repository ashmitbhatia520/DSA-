#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* left,*right;
Node(int value){
  data = value;
  left = right = NULL;
}
};  
Node* insert(Node* root,int target){
  if(!root){
    Node* temp = new Node(target);
  }
  else if(target<root->data){
    root->left = insert(root->left,target);
  }
  else{
    root->right = insert(root->right,target);
  }
  return root;
}
Node* inorder(Node* root){
  while(root->left){
    root = root->left;
  }
  return root;
}
Node* deletion(Node* root,int target){
  if(!root){
    return root;
  }
  else if(target<root->data){
    root->left = deletion(root->left,target);
  }
  else if(target>root->data){
    root->right = deletion(root->right,target);
  }
  else{
    if(!root->right){
      return root->left;
    }
    else if(!root->left){
      return root->right;
    }
    else{
      Node* temp = inorder(root->right);
      root->data = temp->data;
      root->right = deletion(root->right,temp->data);
    }
  }
  return root;
}
void in(Node* root){
    if(!root) return;
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}
int main(){
  Node* root = NULL;
  root = insert(root,5);
  root = insert(root,3);
  root = insert(root,7);
  root = insert(root,2);
  root = insert(root,4);
  root = insert(root,6);
  root = insert(root,8);
  cout<<in(root);
  root = deletion(root,5);
  cout<< in(root);
}
