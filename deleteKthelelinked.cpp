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
void deleteEle(Node* head,int k){
Node* slow=head;// 1 2 3 4 5 6 7 8
    Node* fast=head;
   
    for(int i=1;i<=k;i++){
        fast=fast->next;
       
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    Node* temp2=slow->next;
    slow->next=slow->next->next;
    free(temp2);
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
    
    deleteEle(l1.head,4);
  l1.display();
    cout<<"NULL"<<endl;
    

}