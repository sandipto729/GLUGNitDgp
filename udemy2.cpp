#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Write down a quadric equation(ax2+bx+c)"<<endl;
    cout<<"Please write down the value of a,b,c"<<endl;
    cout<<"a";
    cin>>a;
    cout<<"b";
    cin>>b;
    cout<<"c";
    cin>>c;
    d=((b*b)-(4*a*c));
    if(d<0){cout<<"Roots are imaginary and unequal";}
    else if(d==0){cout<<"Roots are real and equal";}
    else if(d>0){cout<<"Roots are unequal and real";}






}