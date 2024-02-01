#include<iostream>
using namespace std;
int mountain(int*A,int n){
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(A[mid]>A[mid+1]&&A[mid]>A[mid-1]){
            return mid;
        }
        if(A[mid]>A[mid+1]){
            h=mid-1;
        }
        if(A[mid]>A[mid-1]){
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    int A[]={0,2,3,4,1,0};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout<<mountain(A,n);
}