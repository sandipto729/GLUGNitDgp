#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int>f(int arr[],int n,int k){
    deque<int>dq;
    vector<int>ans;
    // making k window
    for(int i=0;i<k;i++){
        while(!dq.empty()&&arr[i]>dq.back()){
            dq.pop_back();
        }
        dq.push_back(arr[i]);
    }
     ans.push_back(dq.front());
    // after making k window
    for(int i=k;i<n;i++){
        if(dq.size()==k)dq.pop_front();
        while(!dq.empty()&&arr[i]>dq.back()){
            dq.pop_back();
        }
        dq.push_back(arr[i]);
        ans.push_back(dq.front());
    }
    return ans;
}
int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int>ans=f(arr,n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}