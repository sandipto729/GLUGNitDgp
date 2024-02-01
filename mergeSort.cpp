#include<iostream>
using namespace std;
void merge(int* A,int l,int mid,int h){
    int len1=mid-l+1;
    int len2=h-mid;
    int a[len1],b[len2];
    for(int i=0;i<len1;i++){
        a[i]=A[l+i];
    }
    for(int i=0;i<len2;i++){
        b[i]=A[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<len1&&j<len2){
        if(a[i]<b[j]){
            A[k++]=a[i++];
        }
        else{
            A[k++]=b[j++];
        }
        
    }
    while(i<len1){
        A[k++]=a[i++];
    }
    while(j<len2){
        A[k++]=b[j++];
    }
}
void mergeSort(int* A,int l,int h){
    int mid=(l+h)/2;
    if(l>=h)return;
    mergeSort(A,l,mid);
    mergeSort(A,mid+1,h);
    merge(A,l,mid,h);
}
int main(){
    int A[]={9, 3, 7, 5, 6, 4, 8, 2};
    int n=sizeof(A)/sizeof(A[0]);
    mergeSort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<"  ";
    }
}