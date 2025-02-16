#include<iostream>
#include<vector>
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
  if(x==-1) return NULL;
  Node* temp = new Node(x);
  temp->left = binarytree();
  temp->right = binarytree();
  return temp;
}
void leftview(Node *root, vector<int> &arr,int level){
  if(!root) return;
  if(level == arr.size()){
   arr.push_back(root->data);   
  }
  leftview(root->left,arr,level+1);
  leftview(root->right,arr,level+1);
}
vector<int> leftView(Node *root) {
    vector<int> arr;
    if(!root) return arr;
    leftview(root, arr,0);
    return arr;
}
int main(){
  cout << "Enter the root node of binary tree (enter -1 for NULL): ";
  Node* root = binarytree();
  vector<int> leftViewResult = leftView(root);
  cout << "Left view of the binary tree: ";
    for (int value : leftViewResult) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
