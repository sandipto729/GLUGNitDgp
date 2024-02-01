#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>span(int*A,int n){
    reverse(A,A+n);
    stack<int>stc;
    stc.push(0);
    vector<int>ans(n,-1);
    for(int i=1;i<n;i++){
        while(!stc.empty()&&A[i]>A[stc.top()]){
            ans[stc.top()]=n-i-1;
            stc.pop();
        }
        stc.push(i);
    }
    reverse(ans.begin(),ans.end());
    
    return ans;
}
int main(){
    int A[]={100,80,60,70,60,75,85};
    int n=sizeof(A)/sizeof(A[0]);
    vector<int>ans;
    ans=span(A,n);
    for(int i=0;i<n;i++){
        cout<<i-ans[i]<<"  ";
    }
}