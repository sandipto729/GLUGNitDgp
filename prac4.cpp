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
void insertHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
void deleteEle(Node* &head){
    int count=1;
    Node* temp=head;
    while(temp!=NULL){
        count++;
    if(count%2!=0){
        Node* temp2;
        temp2=temp->next;
        temp->next=temp->next->next;
        free(temp2);
    }
    else{
        temp=temp->next;
    }
    count++;
    }
}
int main(){
    Node* node1=new Node(8);
    insertHead(node1,9);
    display(node1);
    cout<<endl;
    insertHead(node1,10);
    display(node1);
    cout<<endl;
    insertHead(node1,11);
    display(node1);
    cout<<endl;
    insertHead(node1,12);
    display(node1);
    cout<<endl;
    insertHead(node1,13);
    display(node1);
    cout<<endl;
    insertHead(node1,14);
    display(node1);
    cout<<endl;
    deleteEle(node1);
    display(node1);
    cout<<endl;
    
}