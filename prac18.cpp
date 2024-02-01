#include<iostream>
#include<queue>
#include<deque>
#include<map>
#include <utility>
using namespace std;
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* makingTree(Node*root){
    int data;
    cout<<"Enter data ";
    cin>>data;
    root=new Node(data);
    if(data==-1)return NULL;
    cout<<"Enter data left of "<<data;
    root->left=makingTree(root->left);
    cout<<"Enter data right of "<<data;
    root->right=makingTree(root->right);
    return root;
}
vector<int> leftView(Node*root){
    vector<int>ans;
    queue<Node*>qu;
    qu.push(root);
    while(!qu.empty()){
        int size=qu.size();
       // vector<int>res(size);
        for(int i=0;i<size;i++){
            Node*temp=qu.front();
            qu.pop();
            if(i==0)ans.push_back(temp->data);
            if(temp->left)qu.push(temp->left);
            if(temp->right)qu.push(temp->right);
        }
    }
    return ans;
}
vector<int>buttomView(Node*root){
    vector<int>ans;
    map<int,vector<int> >mp;
    queue<pair<Node*,int> >qu;
    qu.push({root,0});
    while(!qu.empty()){
        Node*temp=qu.front().first;
        int dist=qu.front().second;
        mp[dist].push_back(temp->data);
        if(temp->left)qu.push({temp->left,dist-1});
        if(temp->right)qu.push({temp->right,dist+1});
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        ans.push_back(it->second[it->second.size()-1]);
    }
    return ans;
}
int main(){
    Node*root=NULL;
    root=makingTree(root);
    
    vector<int>ans2=buttomView(root);
    for(int i=0;i<ans2.size();i++){
        cout<<ans2[i]<<" ";
    }
}//4 5 -1 -1 2 3 6 -1 -1 7 -1 -1 1 -1 -1 -1