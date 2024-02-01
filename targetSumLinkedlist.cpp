#include<iostream>
#include<vector>
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
  
  
};
void tergetSum(Node* head,Node* tail,int tar,int *A){
    Node* low=head;
    Node* high=tail;
    while(low!=tail){
        if(low->data+high->data==tar){
            A[0]=low->data;
            A[1]=high->data;
            break;
        }
        if(low->data+high->data>tar){
            high=high->pre;
        }
        if(low->data+high->data<tar){
            low=low->next;
        }
    }
}

int main(){
    
    doubleLinked dl1;
   dl1.insertTail(1);
    dl1.insertTail(5);
   dl1.insertTail(2);
   dl1.insertTail(6);
  dl1.insertTail(3);
   int A[2]={-1,-1};
   int n;
   cout<<"Enter Target Sum : ";
   cin>>n;
   tergetSum(dl1.head,dl1.tail,n,A);
   cout<<A[0]<<" "<<A[1];
  
}