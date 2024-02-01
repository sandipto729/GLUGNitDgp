#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nse(int A[],int n){
    stack<int>stc;
    vector<int>ans(n,-1);
    stc.push(0);
    for(int i=1;i<n;i++){
        while(!stc.empty()&&A[i]<A[stc.top()]){
            ans[stc.top()]=i-stc.top();
            stc.pop();
        }
        stc.push(i);
    }
    for(int i=0;i<n;i++){
        if(ans[i]==-1){
            ans[i]=n-i;
        }
    }
    return ans;
}
vector<int>pse(int A[],int n){
    reverse(A,A+n);
    stack<int>stc;
    vector<int>ans(n,-1);
    stc.push(0);
    for(int i=1;i<n;i++){
        while(!stc.empty()&&A[i]<A[stc.top()]){
            ans[stc.top()]=i-stc.top();
            stc.pop();
        }
        stc.push(i);
    }
    for(int i=0;i<n;i++){
        if(ans[i]==-1){
            ans[i]=n-i;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
vector<int>area(int A[],int n){
    int B[n];
    for(int i=0;i<n;i++){
        B[i]=A[i];
    }
    vector<int>nse1;
    vector<int>pse1;
    nse1=nse(A,n);
    pse1=pse(A,n);
    vector<int>ans(n);
    
    
    for(int i=0;i<n;i++){
       int t=nse1[i]+pse1[i]-1;
       ans[i]=t*B[i];
    }
    return ans;
}
int main(){
    int A[]={2,1,5,6,2,3};
    int n=sizeof(A)/sizeof(A[0]);
    vector<int>ans;
    ans=area(A,n);
    int maxEle=ans[0];
    for(int i=0;i<n;i++){
        if(ans[i]>maxEle){
            maxEle=ans[i];
        }
    }
    cout<< maxEle;
}