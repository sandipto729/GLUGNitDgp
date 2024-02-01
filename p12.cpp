#include<iostream>
using namespace std;
int main(){
    int n,a,sum=0,power=1;
    cin>>n;
    while(n>0){
        a=n%2;
        sum=sum+(a*power);
        power=power*10;
        n=n/2;
        
    }
    cout<<sum;
}