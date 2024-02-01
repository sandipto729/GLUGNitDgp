#include<iostream>
using namespace std;
int main(){
    int r,r2,n,m,sum1=0,power=1,count=0;
    cout<<"Enter decimal no : ";
    cin>>n;
    while(n>0){
        r=n%2;
        n=n/2;
        sum1=sum1+(r*power);
        power=power*10;
        
    }
    cout<<sum1<<endl;
    while(sum1>0){
        r2=sum1%10;
        sum1=sum1/10;
        if(r2==0){count=count+1;}
    }
    cout<<count;
   
    
    
   
    

}