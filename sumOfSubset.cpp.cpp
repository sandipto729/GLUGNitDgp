#include<iostream>
#include<vector>
using namespace std;
void sumSubset(int *arr,int idx,int n,int sum,vector<int>&result){
    if(idx==n){
        result.push_back(sum);
        return;
    }
    sumSubset(arr,idx+1,n,sum+arr[idx],result);
    sumSubset(arr,idx+1,n,sum,result);
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<int>result;
    sumSubset(A,0,n,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}