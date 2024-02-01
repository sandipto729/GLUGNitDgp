#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to JOJO'S calculator"<<endl;
    float num1,num2;
    cout<<"Put your's first number : ";
    cin>>num1;
    cout<<"Put your's second number : ";
    cin>>num2;
    float num3;
    cout<<"Please select which operation do you want to do?"<<endl;
    cout<<"1.SUM"<<endl;
    cout<<"2.SUBSTRACTION"<<endl;
    cout<<"3.MULTIPLICATION"<<endl;
    cout<<"4.DEVISION"<<endl;
    cin>>num3;
    if(num3==1){
        cout<<"Sum of the digits : "<<num1+num2;}
    else if(num3==2){
        cout<<"Substraction of the digits : "<<num1-num2;
    }
    else if(num3==3){
        cout<<"Multiplication of the digits : "<<num1*num2;
    }
    else if(num3==4){
        cout<<"Devision of the digits : "<<num1/num2;
    }
    
}



