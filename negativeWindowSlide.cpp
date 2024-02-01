#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int>windowSlide(int A[],int n,int k){
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        if(A[i]<0){
            dq.push_back(i);
        }
        
    }
    if(dq.empty())ans.push_back(0);
        else{
            ans.push_back(A[dq.front()]);
        }1`
    for(int i=k;i<n;i++){
        if(dq.front()==i-k){
            dq.pop_front();
        }
        if(A[i]<0){
            dq.push_back(i);
        }
      
        if(dq.empty())ans.push_back(0);
        else{
            ans.push_back(A[dq.front()]);
        }
    }
    return ans;
}
int main(){
    int A[]={-8,2,3,-6,10};
    int n=sizeof(A)/sizeof(A[0]);
    vector<int>ans;
    ans=windowSlide(A,n,2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}