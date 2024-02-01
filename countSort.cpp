#include<iostream>
using namespace std;
int getMax(int A[],int n){
    int maxEle=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>maxEle){
            maxEle=A[i];
        }
    }
    return maxEle;
}
void countSort(int* A,int n){
    int maxEle=getMax(A,n);
    int freq[maxEle+1];
    for(int i=0;i<maxEle+1;i++){
    freq[i]=0;
    }
    for(int i=0;i<n;i++){
        freq[A[i]]++;
    }
    for(int i=0;i<maxEle+1;i++){
        freq[i]+=freq[i-1];
    }
    int ans[n];
    for(int i=0;i<n;i++){
        ans[--freq[A[i]]]=A[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<"  ";
    }


}
int main(){
    int A[]={5,9,9,3,1,2,5,6,8};
    int n=sizeof(A)/sizeof(A[0]);
    countSort(A,n);
}