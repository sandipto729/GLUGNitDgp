//brute force solution
/*#include<iostream>
using namespace std;
void nge(int*A,int n){
    int B[n];
    for(int i=0;i<n;i++){
        B[i]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[j]>A[i]){
                B[i]=A[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        A[i]=B[i];
    }
}
int main(){
    int A[]={4,3,9,1,6,8,2};
    int n=sizeof(A)/sizeof(A[0]);
    nge(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
*/
//Stack Solution
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nge(int *A,int n){
    stack<int>stc;
    stc.push(0);
    vector<int> B(n,-1);
    
   
    for(int i=1;i<n;i++){
        while(!stc.empty()&&A[i]>A[stc.top()]){
       
            B[stc.top()]=A[i];
            stc.pop();
            
        }
        stc.push(i);
        }
        return B;
    }

int main(){
    int A[]={4,6,3,1,0,9,5,6,7,3,2};
    int n=sizeof(A)/sizeof(A[0]);
    vector<int>ans;
    ans=nge(A,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
