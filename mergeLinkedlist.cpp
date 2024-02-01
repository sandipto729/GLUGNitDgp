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
    void insertEle(int val){
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
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
    }
};
void insertEleNode(Node* &head,int val){
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
void mergedLinked(Node* &head1,Node* &head2,Node* &head3){
    Node* temp1=head1;
    Node* temp2=head2;
   
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data>temp2->data){
            insertEleNode(head3,temp2->data);
             temp2=temp2->next;
        
        }
        else{
             insertEleNode(head3,temp1->data);
            temp1=temp1->next;
        
        }
        
    }
    while(temp1!=NULL){
         insertEleNode(head3,temp1->data);
         temp1=temp1->next;
         
    }
    while(temp2!=NULL){
         insertEleNode(head3,temp2->data);
        temp2=temp2->next;
        
    }
}
int main(){
    linkedList l1;
    l1.insertEle(1);
     l1.insertEle(3);
      l1.insertEle(5);
       l1.insertEle(7);
        l1.insertEle(9);
        
    l1.display();
    cout<<"NULL"<<endl;
   linkedList l2;
   l2.insertEle(2);
   l2.insertEle(4);
   l2.insertEle(6);
   l2.insertEle(8);
   l2.display();
   cout<<"NULL"<<endl;
   linkedList l3;
   mergedLinked(l1.head,l2.head,l3.head);
   l3.display();
    cout<<"NULL"<<endl;
   
}*/
#include<iostream>
#include<vector>
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
    void insertEle(int val){
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
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
    }
};

Node* mergedLinked(Node* &head1,Node* &head2){
   Node* dummyHeadNode=new Node(-1);
    Node* temp3=dummyHeadNode;
    Node* temp1=head1;
    Node* temp2=head2;
   
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data>temp2->data){
            temp3->next=temp2;
            temp2=temp2->next;
            temp3=temp3->next;
        
        }
        else{
            temp3->next=temp1;
            temp1=temp1->next;
            temp3=temp3->next;
        }
        
    }
    while(temp1!=NULL){
           temp3->next=temp1;
         temp1=temp1->next;
          temp3=temp3->next;
    }
    while(temp2!=NULL){
          temp3->next=temp2;
        temp2=temp2->next;
         temp3=temp3->next;
    }
    return dummyHeadNode->next;
}

Node* mergeMultipleLinkedlist(vector<Node*> &lists){
    while(lists.size()>1){
        Node* mergehead=mergedLinked(lists[0],lists[1]);
        lists.push_back(mergehead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
       
    }
    return lists[0];
}
int main(){
    linkedList l1;
    l1.insertEle(1);
     l1.insertEle(3);
      l1.insertEle(5);
       l1.insertEle(7);
        l1.insertEle(9);
        
    l1.display();
    cout<<"NULL"<<endl;
   linkedList l2;
   l2.insertEle(2);
   l2.insertEle(4);
   l2.insertEle(6);
   l2.insertEle(8);
   l2.display();
   cout<<"NULL"<<endl;
   linkedList l3;
   l3.insertEle(0);
   l3.insertEle(10);
   l3.insertEle(13);
   l3.display();
   cout<<"NULL"<<endl;
   vector<Node*>list;
   list.push_back(l1.head);
    list.push_back(l2.head);
     list.push_back(l3.head);
     linkedList *l4=new linkedList();
     l4->head=mergeMultipleLinkedlist(list);   
   l4->display();
   cout<<"NULL"<<endl;
}