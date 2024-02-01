#include<iostream>
using namespace std;
int binary(int n){
    int r,sum=0,product=1;
   
    while(n>0){
        r=n%2;
        n=n/2;
        sum=sum+(r*product);
        product*=10;
    }
    return sum;
}
int zero(int n){
    int r,sum=0,product=1;
   
    while(n>0){
        r=n%2;
        n=n/2;
        sum=sum+(r*product);
        product*=10;
    }
    
    int r1,count=0;
    while(sum>0){
        
        r1=sum%10;
        sum=sum/10;
        if(r1==0){count++;}

    }
    return count;
    
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<binary(n)<<endl<<binary(m)<<endl;
    if(zero(n)>zero(m)){cout<<n;}
    else{cout<<m;}

}