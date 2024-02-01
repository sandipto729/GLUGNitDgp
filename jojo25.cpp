#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    if(age<=12){
        cout<<"Child";}
        if(age>12 && age<=18){
            cout<<"Teenager";}
             else{ 
                if(age<60){
                    cout<<"Adult";}
                else{
                    cout<<"Senior Adult";}}
            return 0;
}
           
        
    
