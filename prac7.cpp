/*#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
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
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
    }
};
void linkedListReverse(Node* &head){
    if(head==NULL)return;
    linkedListReverse(head->next);
    cout<<head->data<<"  ";
}
int main(){
    linkedList l1;
    l1.insertTail(1);
    
    l1.insertTail(2);
    
    l1.insertTail(3);
    l1.insertTail(4);
    l1.display();
    cout<<endl;
    linkedListReverse(l1.head);
    
    cout<<endl;
}*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
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
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
    }
};
void reverseLinkedlist(Node* &head){
    Node* pre;
    pre->next=head;
    Node* current=head;
    Node* post=head->next;
    while(current->next!=NULL){
        current->next=pre;
        pre=current;
        current=post;
        post=post->next;
    }
}
int main(){
    linkedList l1;
    l1.insertTail(1);

    l1.insertTail(2);
    l1.insertTail(3);
  
    l1.insertTail(4);
    l1.display();
    cout<<endl;
    
}