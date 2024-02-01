#include<iostream>
using namespace std;
int main(){
    int A[10]={6,8,13,17,20,22,25,28,30,35};
    int key;
    int l=0,h=9,mid;
    cout<<"Key :- ";
    cin>>key;
    while(l<=h){
    mid=(l+h)/2;
    if(key==A[mid]){cout<<"Found at "<<mid+1;
    return 0;
    }
    else if(key<A[mid]){
        h=mid-1;

    }
    else if(key>A[mid]){
        l=mid+1;
    }
    }



}