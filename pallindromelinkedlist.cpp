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

Node* middleLisked(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
Node* reverselinked(Node* &head){
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
bool pallindrome(Node* head){
    Node*temp1=head;
    Node* middle=middleLisked(head);
    Node*temp2=reverselinked(middle);
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data!=temp2->data)return false;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}
int main(){
    linkedList l1;
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(3);
    l1.insertTail(4);
    l1.insertTail(4);
    l1.insertTail(3);
    l1.insertTail(2);
    l1.insertTail(1);
    cout<<pallindrome(l1.head);
}