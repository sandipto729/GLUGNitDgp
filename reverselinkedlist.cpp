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
class linkedList{
    public:
    Node* head;
    linkedList(){
        head=NULL;
    }
    void insertTail(int val){
        Node* new_node=new Node( val);
        if(head==NULL){
            head=new_node;
            return;
            
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
    }
};
Node* reverselinked(Node* head,int k){
    Node* pre=NULL;
    Node* current=head;
    int count=0;
    while(current!=NULL&&count<k){
        Node* post=current->next;
        current->next=pre;
        pre=current;
        current=post;
        count++;
    }
    if(current!=NULL){
        Node* new_head=reverselinked(current,k);
        head->next=new_head;
    }
    return pre;
}
int main(){
    linkedList l1;
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(3);
    l1.insertTail(4);
    l1.insertTail(5);
    l1.insertTail(6);
    l1.insertTail(7);
    l1.insertTail(8);
    l1.display();
    cout<<"NULL"<<endl;
    l1.head=reverselinked(l1.head,2);
    l1.display();
    cout<<"NULL"<<endl;
    linkedList *l2=new linkedList();
}