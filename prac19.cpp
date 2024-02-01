#include<iostream>
#include<stack>
using namespace std;
void f(int a[],int n,int ans[]){
    stack<int>st;
    for(int i=0;i<n;i++){
       for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] > a[st.top()]) {
            ans[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    }
}
int main(){
    int arr[]={1,4,8,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i]=-1;
    }
    f(arr,n,ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}