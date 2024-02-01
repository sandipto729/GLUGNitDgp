#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>targetSum(int A[],int n,int x){
    unordered_map<int,int>up;
    vector<int>ans(2,-1);
    for(int i=0;i<n;i++){
        if(up.find(x-A[i])!=up.end()){
            ans[0]=up[x-A[i]];
            ans[1]=i;
            return ans;
        }
        else{
            up[A[i]]=i;
        }
    }
    return ans;
}
int main(){
    int A[]={1,4,5,11,13,10,2};
    int n=sizeof(A)/sizeof(A[0]);
    int x=13;
    vector<int>ans=targetSum(A,n,x);
    cout<<ans[0]<<" "<<ans[1];
}