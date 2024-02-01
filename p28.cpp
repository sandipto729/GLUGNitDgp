#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter Number : ";
    for(;;){
        cin>>n;
        if(n==0){
            break;
        }
        sum+=n;
    }
    cout<<"Sum : "<<sum;
}