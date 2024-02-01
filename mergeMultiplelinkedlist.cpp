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
Node* mergeLinkedlist(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    Node* dummyhead=new Node(-1);
    Node*temp3=dummyhead;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data>temp2->data){
        temp3->next=temp2;
        temp3=temp3->next;
        temp2=temp2->next;
    }
    else{
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }
    }
    while(temp1!=NULL){
         temp3->next=temp1;
        temp3=temp3->next;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }
    return dummyhead->next;
}
Node* merge(vector<Node* >lists){
    while(lists.size()>1){
        Node* new_head=mergeLinkedlist(lists[0],lists[1]);
        lists.push_back(new_head);
        lists.erase(lists.begin());
         lists.erase(lists.begin());
    }
    return lists[0];
}
int main(){
    linkedList l1;
   linkedList l2;
   linkedList l3;
    l1.insertTail(1);
    l1.insertTail(3);
    l1.insertTail(5);
    l2.insertTail(2);
    l2.insertTail(4);
    l2.insertTail(7);
   l3.insertTail(0);
    l3.insertTail(6);
    l3.insertTail(9);
    linkedList *l4;
    vector<Node *>set;
    set.push_back(l1.head);
    set.push_back(l2.head);
     set.push_back(l3.head);
    l4->head=merge(set);
    l4->display();
    cout<<"NULL"<<endl;
}