#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Write down a letter";

    cin>>a;
    b=a%3;
    c=a%5;
    if(b==0 || c==0){
        cout<<a;
    }
    

}