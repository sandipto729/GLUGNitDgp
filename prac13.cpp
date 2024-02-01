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
    void inserttail(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
        else{
            Node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
    }
};
Node* mergeLinked(Node* head1,Node* head2){
    Node* randomHead=new Node(-1);
    Node* temp1=head1;
    Node* temp2=head2;
    Node* temp3=randomHead;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data<temp2->data){
        temp3->next=temp1;
        temp3=temp3->next;
        temp1=temp1->next;
        }
        else{
            temp3->next=temp2;
            temp3=temp3->next;
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
         temp3->next=temp1;
        temp3=temp3->next;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
         temp3->next=temp2;
            temp3=temp3->next;
            temp2=temp2->next;
    }
    return randomHead->next;
}
Node* middleLinked(Node* head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* circularLinked(Node* &head){
    Node*slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
       if(slow==fast&&fast!=head){
            break;
        }
        fast=fast->next->next;
        slow=slow->next;
         
    }
   fast=head;
   while(slow->next!=fast->next){
       slow=slow->next;
       fast=fast->next;
   }
   Node* new_head=slow->next;
   fast->next=NULL;
   return new_head;
}
void displayCircular(Node* head){
    Node* temp=head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
}
bool pallindrome(Node* head){
    Node* half=middleLinked(head);
    Node* pre=NULL;
    Node* current=half;
    while(current!=NULL){
        Node* post=current->next;
        current->next=pre;
        pre=current;
        current=post;
    }
    Node*temp1=head;
    Node*temp2=pre;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}
Node* rotateLinked(Node* &head,int k){
Node* slow=head;
Node* fast=head;
int count=0;
while(count<k){
    fast=fast->next;
    count++;
}
while(fast->next!=NULL){
    slow=slow->next;
    fast=fast->next;
}
fast->next=head;
Node*new_head=slow->next;
slow->next=NULL;
return new_head;

}
/*
Node* seperateOddEven(Node* &head){
    Node* oddHead=new Node(-1);
    Node* evenHead=new Node(-1);
    Node* temp1=head;
    Node* temp2=head->next;
    Node* temp3=oddHead;
    Node* temp4=evenHead;
    while(temp1->next!=NULL&&temp1!=NULL){
        temp3->next=temp1;
        temp3=temp3->next;
        temp1=temp1->next->next;
    }
    while(temp2->next!=NULL&&temp2!=NULL){
        temp4->next=temp2;
        temp2=temp2->next->next;
        temp4=temp4->next;
    }
    temp3->next=NULL;
    temp3->next=evenHead->next;
    temp4->next=NULL;
    return oddHead->next;
}*/
Node* separateOddEven(Node* &head) {
    if (head == nullptr || head->next == nullptr) {
        return head; // No need to separate if there are 0 or 1 nodes
    }

    Node* oddHead = new Node(-1);
    Node* evenHead = new Node(-1);
    Node* temp1 = head;
    Node* temp2 = head->next;
    Node* temp3 = oddHead;
    Node* temp4 = evenHead;

    while (temp1 != nullptr && temp1->next != nullptr) {
        temp3->next = temp1;
        temp3 = temp3->next;
        temp1 = temp1->next->next;
    }

    while (temp2 != nullptr && temp2->next != nullptr) {
        temp4->next = temp2;
        temp4 = temp4->next;
        temp2 = temp2->next->next;
    }

    temp3->next = nullptr; // Mark the end of the odd list
    temp4->next = nullptr; // Mark the end of the even list

    // Connect odd list with even list
    temp3->next = evenHead->next;

    return oddHead->next;
}
int main(){
    linkedList l1;
   l1.inserttail(1);
   //  l1.inserttail(2);
      l1.inserttail(3);
    //   l1.inserttail(4);
        l1.inserttail(5);
        l1.display();
        cout<<endl;
    linkedList l2;
    l2.inserttail(2);
    l2.inserttail(4);
   l2.inserttail(6);
    l2.display();
    cout<<endl;
    linkedList*l3=new linkedList();
    l3->head=mergeLinked(l1.head,l2.head);
   /* l3->inserttail(1);
    l3->inserttail(2);
    l3->inserttail(3);
    l3->inserttail(4);
    l3->inserttail(2);
    l3->inserttail(1);*/
    l3->display();
    cout<<endl;
   // l3->head->next->next->next->next->next->next=l3->head->next->next;
  //  cout<<middleLinked(l3->head);
 /* linkedList *l4=new linkedList();
  l4->head=circularLinked(l3->head);
  displayCircular(l4->head);
  cout<<endl;*/
  //cout<<pallindrome(l3->head);
  linkedList *l4=new linkedList();
 // l4->head=rotateLinked(l3->head,3);
 l4->head=separateOddEven(l3->head);
  l4->display();
   cout<<endl;
}