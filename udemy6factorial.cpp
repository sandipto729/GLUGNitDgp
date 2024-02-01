#include<iostream>
using namespace std;
int main(){
    int i,n,product=1;
    cout<<"Enter your number : ";
    cin>>n;
    if(n==0){cout<<"Factorial of this number is : 1 ";}
    else if(n>0){for(i=1;i<=n;i++)
    {product=product*i;}
    cout<<"Factorial of this number is : "<<product;}
    else{cout<<"Not valid";}
   



}