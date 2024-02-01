#include<iostream>
using namespace std;
int factorial(int n){
    int i,product=1;
    for(i=1;i<=n;i++){product=product*i;}
    return product;
}
int main(){
    int j,m;
    cin>>m;
    for(j=1;j<=m;j++){
        cout<<"Factorial of the no "<<j<<" is : "<<factorial(j)<<endl;
    }
}