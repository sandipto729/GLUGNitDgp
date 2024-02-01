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
int sizeLinked(Node* head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* rotateLinked(Node* &head,int k){
    Node* temp1=head;
    int n=sizeLinked(head);
    for(int i=1;i<n-k;i++){
        temp1=temp1->next;
    }
    Node* new_head=temp1->next;
    temp1->next=NULL;
    Node*temp3=new_head;
    while(temp3->next!=NULL){
        temp3=temp3->next;
    }
    temp3->next=head;
    return new_head;
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
    l1.head=rotateLinked(l1.head,2);
    l1.display();
    cout<<"NULL"<<endl;
}