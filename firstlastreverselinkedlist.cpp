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
        Node* new_node=new Node(val);
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
Node* reverseLinked(Node* &head){
    Node* pre=NULL;
    Node* current=head;
    while(current!=NULL){
        Node* post=current->next;
        current->next=pre;
        pre=current;
        current=post;
    }
    return pre;
}
Node* seperate(Node* &head){
   Node* slow=head;
   Node* fast=head;
   while(fast!=NULL&&fast->next!=NULL){
       slow=slow->next;
       fast=fast->next->next;
   }
   Node* reverse=reverseLinked(slow);
   Node* first=head;
   Node* last=reverse;
   Node* dummyhead=new Node(-1);
   Node* temp=dummyhead;
   while(first!=NULL&&last!=NULL){
       temp->next=first;
       temp=temp->next;
       first=first->next;
       temp->next=last;
       temp=temp->next;
       last=last->next;
   }
   return dummyhead->next;
}
int main(){
    linkedList l1;
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(3);
    l1.insertTail(4);
    l1.insertTail(5);
    l1.insertTail(6);
    l1.display();
    cout<<"NULL"<<endl;
    linkedList* l2=new linkedList();
    l2->head=seperate(l1.head);
    l2->display();
     cout<<"NULL"<<endl;
}