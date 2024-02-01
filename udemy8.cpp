#include<iostream>
using namespace std;
int main(){
    int i,n,count=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            count=count+1;
        }

    }
    if(count==0){cout<<"Prime no";}
    else{cout<<"Compound no";}

}
