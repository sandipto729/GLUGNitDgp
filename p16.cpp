#include<iostream>
using namespace std;
int factorial(int n){
    int i,product=1;
    for(i=1;i<=n;i++){
        product=product*i;
    }
    return product;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"ncr : "<<(factorial(n)/(factorial(r)*factorial(n-r)));
}