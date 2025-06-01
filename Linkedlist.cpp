#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class ll{
    node* head;
    node* tail;
public:
    ll(){
        head=NULL;
        tail=NULL;
   }

   void push_front(int val){
        node* newNode = new node(val);
        if(head==NULL){
            head = tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
    }
    } 
    void push_back(int val){
        node* newNode = new node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printll(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
   }
};

int main (){

    ll likedList;

    likedList.push_front(3);
    likedList.push_front(2);
    likedList.push_front(1);
    likedList.push_back(4);
    likedList.push_back(5);
    likedList.push_back(6);
    likedList.printll();
}