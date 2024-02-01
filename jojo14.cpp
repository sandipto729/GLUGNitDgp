#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"X: ";
    cin>>x;
    int n1;
    int n2;
    int n3;
    n1=x/100;
    n2=((x%100)%10);
    n3=((x%100)-n2)/10;



    cout<<"sum of the digits of X: "<<n1+n2+n3;
}