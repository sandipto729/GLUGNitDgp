#include<iostream>
using namespace std;
int main(){
    int a;
    
    cout<<"Enter a five digit : ";
    cin>>a;
    
    int b;
    b=a/10000;
    int c;
    c=((((a%10000)%1000)%100)-((((a%10000)%1000)%100)%10))/10 ;




    cout<<"Sum of the first and second last digit of the letter : "<<b+c;

}