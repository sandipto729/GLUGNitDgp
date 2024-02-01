/*#include<iostream>
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
  //insert tail 
  
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
  
  //display function
  void display(){
      Node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" -> ";
          temp=temp->next;
      }
  }
};
int sizeoflinkedList(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
bool equal(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    int size1=sizeoflinkedList(head1);
    int size2=sizeoflinkedList(head2);
    if(size1!=size2)return false;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}
int main(){
    linkedList l1;
    linkedList l2;
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(3);
   l1.insertTail(4);
    l1.insertTail(5);
    l2.insertTail(1);
    l2.insertTail(2);
    l2.insertTail(3);
    l2.insertTail(40);
    l2.insertTail(5);
    cout<<equal(l1.head,l2.head);
}*/
/*#include<iostream>
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
  //insert tail 
  
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
  
  //display function
  void display(){
      Node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" -> ";
          temp=temp->next;
      }
  }
};
int sizeoflinkedList(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int intersection(Node* head1,Node* head2){
    Node*temp1=head1;
    Node*temp2=head2;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data==temp2->data){
            return temp1->data;
        }
       if(temp1->data>temp2->data){
           temp2=temp2->next;
       }
       else{
           temp1=temp1->next;
       }
    }
    return -1;
}
int main(){
    linkedList l1;
    linkedList l2;
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(3);
  l1.insertTail(7);
  
    l2.insertTail(10);
    l2.insertTail(20);
    l2.insertTail(30);
    l1.head->next->next->next->next=l2.head->next->next;
    
    cout<<intersection(l1.head,l2.head);
}*/
/*#include<iostream>
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
    //insert tail 
  
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

  //display function
  void display(){
      Node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" -> ";
          temp=temp->next;
      }
  }
};

int sizelinkedList(Node* head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void deleteEle(Node* &head,int k){
    int pst=sizelinkedList(head)-k+1;
    Node*temp=head;
    int count=0;
    while(count==pst-1){
        temp=temp->next;
        count++;
    }
    Node*temp2=temp->next;
    temp->next=temp->next->next;
    free(temp2);
}
int main(){
    linkedList l1;
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(3);
    l1.insertTail(4);
    l1.insertTail(5);
    l1.display();
    cout<<endl;
    deleteEle(l1.head,2);
    l1.display();
    cout<<endl;
}*/


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
    //insert tail 
  
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

  //display function
  void display(){
      Node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" -> ";
          temp=temp->next;
      }
  }
};

int sizelinkedList(Node* head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void deleteEle(Node* &head,int k){
    int pst=sizelinkedList(head)-k+1;
    Node*temp=head;
    int count=0;
    while(count==pst-1){
        temp=temp->next;
        count++;
    }
    Node*temp2=temp->next;
    temp->next=temp->next->next;
    free(temp2);
}
int main(){
    linkedList l1;
    l1.insertTail(1);
    l1.insertTail(2);
    l1.insertTail(3);
    l1.insertTail(4);
    l1.insertTail(5);
    l1.display();
    cout<<endl;
    deleteEle(l1.head,2);
    l1.display();
    cout<<endl;
}