#include<iostream>
using namespace std;
int main(){
    int r,n,sum=0,power=1;
    cin>>n;
    while(n>0){
        r=n%10;
       
        sum=sum+(r*power);
        power=power*2;
        n=n/10;

    }
    cout<<sum<<endl;

}