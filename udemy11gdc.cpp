#include<iostream>
using namespace std;
int main(){
    int i,n,m;
    cin>>n>>m;
    while(m!=n){
        if(m>n){m=m-n;}
        else if(n>m){n=-m+n;}
    }
    cout<<"GDC of two given no is : "<<n;
}