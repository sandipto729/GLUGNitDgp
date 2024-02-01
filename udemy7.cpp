#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter your number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){sum=sum+i;}
        
    }
    if(sum==n*2){cout<<"Your number is a perfect number";}
    else if(sum!=n*2){cout<<"Your number is a nonperfect number";}

}