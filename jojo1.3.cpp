#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    a=5;
    b=7;
    cout<<"a+b = "<<a+b<<endl;//12
    a=a++;
    cout<<a<<endl;//5
    a=++a;//7
    cout<<a<<endl;
    cout<<"a+b = "<<a+b;//14
}