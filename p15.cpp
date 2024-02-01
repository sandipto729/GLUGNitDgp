#include<iostream>
using namespace std;

int number(int n){
int r,sum=0,product=1;
while(n>0){
r=n%2;
n=n/2;
sum=sum+(r*product);
product=product*10;
}
int count=0;
while(sum>0){
int r1=sum%10;
sum=sum/10;
if(r1==0){count++;
}
}
return count;
}

int main(){
int n,m;
cin>>n>>m;
cout<<number(n)<<endl<<number(m)<<endl;
if(number(n)>number(m)){cout<<n;}
else if(number(n)<number(m)) {cout<<m;}
}