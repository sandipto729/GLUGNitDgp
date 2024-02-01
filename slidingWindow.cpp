#include<iostream>
#include<deque>
using namespace std;
#include<vector>
vector<int>slidingWindow(int A[],int n,int k){
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(!dq.empty()&&A[i]>A[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(A[dq.front()]);
    for(int i=k;i<n;i++){
        int curr=A[i];
        if(dq.front()==i-k)dq.pop_front();
         while(!dq.empty()&&A[i]>A[dq.back()]){
            dq.pop_back();
        }
         dq.push_back(i);
          ans.push_back(A[dq.front()]);
    }
    return ans;
}
int main(){
    int A[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(A)/sizeof(A[0]);
    vector<int>ans;
    ans=slidingWindow(A,n,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}