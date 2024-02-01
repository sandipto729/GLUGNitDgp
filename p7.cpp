#include<iostream>
using namespace std;
int main(){
    int r,n,rev=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==n){
        cout<<"Enter number is a palindrome";
    }
    else{cout<<"Enter number is not a palindrome";}
}
