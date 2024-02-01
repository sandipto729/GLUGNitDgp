#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* makingTree(Node*root){
    int data;
    cout<<"Enter data "<<endl;
    cin>>data;
    root=new Node(data);
    if(data==-1)return NULL;
    cout<<"Enter data left of "<<data<<endl;
    root->left=makingTree(root->left);
    cout<<"Enter data right of "<<data<<endl;
    root->right=makingTree(root->right);
    return root;
}
void levelorderTriversal(Node*root){
    queue<Node*>qu;
    qu.push(root);
    qu.push(NULL);
    while(!qu.empty()){
        Node*temp=qu.front();
        qu.pop();
    if(temp==NULL){
        cout<<endl;
        if(!qu.empty()){
            qu.push(NULL);
        }
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left){
            qu.push(temp->left);
        }
        if(temp->right){
            qu.push(temp->right);
        }
    }
}
}
void inorderTriversal(Node*root){
    if(root==NULL)return;
    inorderTriversal(root->left);
    cout<<root->data<<" ";
    inorderTriversal(root->right);
}
void preorder(Node*root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postOrder(Node*root){
    if(root==NULL)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node*root=NULL;
    root=makingTree(root);
    cout<<"Level Triversal : -"<<endl;
    levelorderTriversal(root);
    cout<<endl;
    cout<<"InorderTRiversal :- ";
    inorderTriversal(root);
    cout<<endl;
    cout<<"Preorder Triversal :- ";
    preorder(root);
    cout<<endl;
    cout<<"PostOrder Triversal :- ";
    postOrder(root);
}