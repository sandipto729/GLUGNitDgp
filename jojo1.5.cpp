#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter your costing price = ";
    cin>>cp;
    cout<<"Enter your selling price = ";
    cin>>sp;
    int a;
    a=sp-cp;
    if(a<=0){cout<<"Your loss is : "<<(-a)<<"rs";}
    else{cout<<"Your profit is : "<<a<<"rs";}
}