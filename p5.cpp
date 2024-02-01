#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;//1724
    while(n>0){
        r=n%10;
        n=n/10;
        cout<<r<<endl;
    }
   


}