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
Node* binarytree(){
  int x;
  cin>>x;
  if(x==-1){
    return NULL;
  }
  Node* temp = new Node(x);
  temp->left = binarytree();
  temp->right = binarytree();
  return temp;
}
int sumofbinarytree(Node* root){
  if(!root) return 0;
  return root->data + sumofbinarytree(root->left) + sumofbinarytree(root->right);
}
int main(){
  cout<<"enter the root node";
  Node* root = binarytree();
  cout<<sumofbinarytree(root);
}
