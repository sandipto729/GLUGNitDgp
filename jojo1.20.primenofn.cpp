#include<iostream>
using namespace std;
bool isprime(int n){
    int j,count=0;
    for(j=1;j<=n;j++){
        if(n%j==0){count++;}
    }
    if(count==2){return true;}
    else{return false;}
}
int main(){
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isprime(i)==true){sum=sum+i;}
    }
    cout<<sum;

}