#include<iostream>
using namespace std;
int main(){
    cout<<"Please select your working hours = ";
    int wh;
    cin>>wh;
    if((wh>=9)&&(wh<18)){cout<<"Its working hour";}
    else{cout<<"leisure";}
}