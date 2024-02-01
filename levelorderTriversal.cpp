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
    cout<<"Enter data";
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1)return NULL;
    cout<<"Enter data left of "<<data<<endl;
    root->left=makingTree(root->left);
    cout<<"Enter data right of "<<data<<endl;
    root->right=makingTree(root->right);
    return root;
}
void triversalTree(Node *root){
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
int main(){
    Node*root=NULL;
    root=makingTree(root);
    triversalTree(root);
}