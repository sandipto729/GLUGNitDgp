#include<iostream>
using namespace std;
int main(){
    cout<<"Hello to JOJO's calculator"<<endl;
    float num1,num2;
    cout<<"Enter your 1st number = ";
    cin>>num1;
    cout<<"Enter your 2nd number = ";
    cin>>num2;
    cout<<"Please select which operation do you want to do"<<endl;
    cout<<"1.sum"<<endl<<"2.substreaction"<<endl<<"3.product"<<endl<<"4.devision"<<endl;
    float num3;
    cin>>num3;
    if(num3==1){cout<<"sum= "<<num1+num2;}
    if(num3==2){cout<<"substraction= "<<num1-num2;}
    if(num3==3){cout<<"product= "<<num1*num2;}
     if(num3==4){cout<<"devision= "<<num1/num2;}

}