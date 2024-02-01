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
int sizeLinkedlist(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
bool equalLinkedlist(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    int size1=sizeLinkedlist(head1);
    int size2=sizeLinkedlist(head2);
    if(size1!=size2)return false;
    while(temp1!=NULL){
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
    
    l1.display();
    cout<<"NULL"<<endl;
    linkedList l2;
    
    l2.insertTail(5);
    l2.insertTail(6);
    l2.insertTail(7);
    l2.insertTail(8);
    l2.display();
    cout<<"NULL"<<endl;
    cout<<equalLinkedlist(l1.head,l2.head);

}