#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
void insertHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void insertTail(Node* &head,int val){
    Node*temp=head;
    Node* new_node=new Node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    
}
void insertEle(Node* &head,int pst,int val){
    Node* temp=head;
    int count=0;
    while(count!=pst-1){
        temp=temp->next;
        count++;
    }
    Node* new_node=new Node(val);
    new_node->next=temp->next;
    temp->next=new_node;
}
void interchange(Node* &head,int pst,int val){
    Node* temp=head;
    int count=1;
    while(count!=pst){
        count++;
        temp=temp->next;
    }
     temp->data=val;
}
void display(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
   
}
int main(){
    Node* node1=new Node(12);
    insertHead(node1,23);
    display(node1);
    cout<<endl;
    insertHead(node1,32);
    display(node1);
    cout<<endl;
    insertHead(node1,45);
    display(node1);
    cout<<endl;
    insertTail(node1,57);
    display(node1);
    cout<<endl;
    insertTail(node1,63);
    display(node1);
    cout<<endl;
    insertTail(node1,68);
    display(node1);
    cout<<endl;
    insertEle(node1,2,0);
    display(node1);
    cout<<endl;
}