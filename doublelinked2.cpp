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
  void deleteTail(){
       Node* temp2=tail;
      Node* temp=tail->pre;
      temp->next=NULL;
      tail=temp;
     
      free(temp2);
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
void deleteKthpst(Node*&head,int pst){
    if(head==NULL)return;
    int count=0;
    Node* temp=head;
    while(temp!=NULL&&count<pst-2){
        temp=temp->next;
        count++;
    }
    Node* temp2=temp->next;
    Node* temp3=temp->next->next;
    temp->next=temp3;
    temp3->pre=temp;
    free(temp2);
}
void reverseLinked(Node* &head,Node* &tail){
    Node* current=head;
    while(current){
        Node* post=current->next;
        current->next=current->pre;
        current->pre=post;
        current=post;
    }
    Node* temp=tail;
    tail=head;
    head=temp;
}
bool pallindrome(Node*&head,Node*tail){
    Node* temp1=head;
    Node* temp2=tail;
    while(temp1!=temp2){
        if(temp1->data!=temp2->data)return false;
        temp1=temp1->next;
        temp2=temp2->pre;
    }
    return true;
}
int main(){
    Node* new_node=new Node(3);
    doubleLinked dl1;
   dl1.insertTail(1);
    dl1.insertTail(2);
   dl1.insertTail(3);
   dl1.insertTail(4);
  // dl1.insertTail(4);
   dl1.insertTail(3);
   dl1.insertTail(2);
   dl1.insertTail(1);
   dl1.displayfirst();
   cout<<"NULL"<<endl;
   dl1.displayLast();
   cout<<"NULL"<<endl;
   /*insertKthpst(dl1.head,0,2);
   dl1.displayfirst();
   cout<<"NULL"<<endl;
   deleteKthpst(dl1.head,2);
    dl1.displayfirst();
   cout<<"NULL"<<endl;
   dl1.deleteTail();
   dl1.displayfirst();
   cout<<"NULL"<<endl;
   reverseLinked(dl1.head,dl1.tail);
   dl1.displayfirst();
   cout<<"NULL"<<endl;*/
   cout<<pallindrome(dl1.head,dl1.tail);
}