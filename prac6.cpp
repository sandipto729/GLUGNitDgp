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
/*void deleteEle(Node* &head){
    Node* temp=head;
    while(temp!=NULL&&temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node*temp2=temp->next;
            temp->next=temp->next->next;
            free(temp2);
        }
        else{
            temp=temp->next;
        }
    }
}*/
int main(){
    linkedList l1;
    l1.insertTail(1);
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(2);
    l1.insertTail(2);
    l1.insertTail(3);
    l1.insertTail(3);
    l1.insertTail(3);
    l1.insertTail(3);
    l1.insertTail(4);
    l1.display();
}