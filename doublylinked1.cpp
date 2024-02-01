#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* pre;
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
class doubleLinked{
  public:
  Node* head;
  Node* tail;
  doubleLinked(){
      head=NULL;
      tail=NULL;
  }
  void insertHead(int val){
      Node* new_node=new Node(val);
      if(head==NULL){
          head=new_node;
          tail=new_node;
          return;
      }
      else{
          new_node->next=head;
          head->pre=new_node;
          head=head->pre;
      }
  }
  void insertTail(int val){
      Node* new_node=new Node(val);
      if(head==NULL){
          head=new_node;
          tail=new_node;
      }
      else{
          tail->next=new_node;
          new_node->pre=tail;
          tail=new_node;
      }
  }
  void displayfirst(){
      Node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" <-> ";
          temp=temp->next;
      }
  }
  void displayLast(){
      Node* temp=tail;
      while(temp!=NULL){
         cout<<temp->data<<" <-> ";
         temp=temp->pre;
      }
  }
};
void insertKthpst(Node* &head,int val,int pst){
    Node* new_node=new Node(val);
    Node*temp=head;
    int count=0;
    while(count<pst-2&&temp!=NULL){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    Node* temp2=temp->next;
    new_node->next=temp2;
    temp2->pre=new_node;
    temp->next=new_node;
    new_node->pre=temp;
    }
}
int main(){
    Node* new_node=new Node(3);
    doubleLinked dl1;
   dl1.insertTail(1);
    dl1.insertTail(2);
   dl1.insertTail(3);
   dl1.insertTail(4);
   dl1.insertTail(5);
   dl1.insertTail(6);
   dl1.insertTail(7);
   dl1.insertTail(8);
 dl1.displayfirst();
   cout<<"NULL"<<endl;
   dl1.displayLast();
   cout<<"NULL"<<endl;
   insertKthpst(dl1.head,0,2);
   dl1.displayfirst();
   cout<<"NULL"<<endl;
}