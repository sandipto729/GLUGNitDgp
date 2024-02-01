#include<iostream>
#include<vector>
using namespace std;
void sum(int* A,int n,int* B,int m){
    vector<int>ans;
    int i=n-1;
    int j=m-1;
    int carry=0;
    while(i>=0&&j>=0){
        int sum=A[i]+B[j]+carry;
        carry=sum/10;
        sum=sum%10;
        i--;
        j--;
        ans.push_back(sum);
    }
    while(i>=0){
         int sum=A[i]+carry;
        carry=sum/10;
        sum=sum%10;
        i--;
       ans.push_back(sum);
    }
    while(j>=0){
         int sum=B[j]+carry;
        carry=sum/10;
        sum=sum%10;
       
        j--;
        ans.push_back(sum);
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
       ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int A[]={1,2,3,4,5};
    int B[]={7,8,9};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);
    sum(A,n,B,m);
}