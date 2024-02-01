//Book distrubution
//chocolate distribution
#include<iostream>
using namespace std;
bool candistribute(int A[],int n,int mid,int k){
    int current=0;
   int student=1;
   for(int i=0;i<n;i++){
       if(A[i]>mid)return false;
       if(current+A[i]>mid){
           student++;
           current=A[i];
           if(student>k)return false;
       }
       else{
           current+=A[i];
       }
   }
   return true;
}
int minOfMax(int A[],int n,int k){
    int l=A[0];
    int h=0;
    for(int i=0;i<n;i++){
        h+=A[i];
    }
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(candistribute(A,n,mid,k)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    int A[]={12,34,67,90};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<minOfMax(A,n,2);
}

//Cow Race
//Child Race
#include<iostream>
using namespace std;
bool canplaceCow(int *A,int n,int k,int mid){
    int coor=A[0];
    int cow=1;
    for(int i=1;i<n;i++){
        if(A[i]-coor>=mid){
            cow++;
            coor=A[i];
        }
        if(cow==k)return true;
    }
    return false;
}
int race(int *A,int n,int k){
    int l=A[0],h=A[n-1]-A[0],ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(canplaceCow(A,n,k,mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
int main(){
    int A[]={1,2,4,8,9};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<race(A,n,3);
    
}