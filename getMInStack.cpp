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
    
    Node* head;
    
   Node* minhead;
    public:
    
    stack(){
        head=NULL;
        minhead=NULL;
    }
    
    void push(int val){
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
        
        if(minhead==NULL||val<=minhead->data){
            Node* new_node2=new Node(val);
            new_node2->next=minhead;
            minhead=new_node2;
        }
    }
    void pop(){
        if(head==NULL){
            cout<<"Under_flow";
            return;
        }
        Node* temp=head;
        head=head->next;
        free(head);
        
        Node* temp2=minhead;
        minhead=minhead->next;
        free(temp2);
        
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is empty";
            return -1;
        }
        return head->data;
    }
    int getmin(){
        if(head==NULL){
            cout<<"Stack is empty";
            return -1;
        }
        return minhead->data;
    }
};
int main(){
    stack  stc;
    stc.push(10);
     stc.push(2);
      stc.push(3);
       stc.push(4);
        stc.push(5);
        
        cout<<stc.top()<<endl;
        cout<<stc.getmin()<<endl;
}