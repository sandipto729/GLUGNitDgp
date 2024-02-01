#include<iostream>
using namespace std;
int main(){
    int i,n,num1=0,num2;
    cout<<"Enter a Number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){num1=num1+i;}
    }
    cout<<"Sum of the factor of the no "<<n<<" is : "<<num1;
    return(0);

}