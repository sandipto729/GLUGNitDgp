/*
#include<iostream>
using namespace std;
void printArray(int arr[],int idx,int n){
    if(idx==n)return;
    cout<<arr[idx];
    printArray(arr,idx+1,n);
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    printArray(A,0,n);
}
*/
#include<iostream>
using namespace std;
void printArray(int *arr,int idx,int n){
    if(idx==n)return;
    cout<<arr[idx];
    printArray(arr,idx+1,n);
}
int main(){
    int n,A[100];
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    printArray(A,0,n);
}