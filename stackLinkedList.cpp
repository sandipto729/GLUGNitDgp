#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class stack{
    int capacity;
    Node* head;
    int currSize;
    public:
    stack(int val){
        capacity=val;
        head=NULL;
        currSize=0;
    }
   bool isEmpty(){
        return currSize==0;
    }
    bool isFull(){
        return currSize==capacity;
    }
   void push(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
        else{
            new_node->next=head;
            head=new_node;
        }
        currSize++;
    }
    void pop(){
        if(currSize>0){
        currSize--;
        head=head->next;
    }
    }
    int peek(){
        if(currSize>0){
        return head->data;
        }
        return -1;
    }

};
int main(){
    stack stc(10);
    stc.push(1);
     stc.push(2);
      stc.push(3);
       stc.push(4);
        stc.push(5);
        stc.push(6);
        cout<<stc.peek();
        cout<<endl;
        cout<<stc.isEmpty();
          cout<<endl;
        cout<<stc.isFull();
          cout<<endl;
        stc.pop();
        stc.pop();
         cout<<stc.peek();
           cout<<endl;
        cout<<stc.isEmpty();
          cout<<endl;
        cout<<stc.isFull();
          cout<<endl;
         stc.pop();
        stc.pop();
         cout<<stc.peek();
           cout<<endl;
        cout<<stc.isEmpty();
          cout<<endl;
        cout<<stc.isFull();
          cout<<endl;
         stc.pop();
        stc.pop();
         cout<<stc.peek();
           cout<<endl;
        cout<<stc.isEmpty();
          cout<<endl;
        cout<<stc.isFull();
          cout<<endl;
}