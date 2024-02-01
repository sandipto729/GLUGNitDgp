#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a five digit number: ";
    cin>>x;
    int n1;
    n1=x/10000;
    int n2;
    n2=(((((x%10000)%1000)%100))-((((x%10000)%1000)%100)%10))/10;


    cout<<"sum of the first and second last digit of the number is: "<<n1+n2;

}