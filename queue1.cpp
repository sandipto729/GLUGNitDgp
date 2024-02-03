#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class queue{
    Node*head;
    int size;
    public:
    queue() : head(NULL), size(0) {}
    void push(int data){
        Node*temp2=new Node(data);
        Node*temp=head;
        size++;
        if(!head){
            head=temp2;
            return;
        }
        else{
            while(temp->next)temp=temp->next;
            temp->next=temp2;
            return;
        }
    }
    void pop(){
        size--;
        head=head->next;
        return;
    }
    bool empty(){
        return head==NULL;
    }
    int length(){
        return size;
    }
    int front(){
        return head->data;
    }
};
int main(){
    queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
}