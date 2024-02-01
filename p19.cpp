#include<iostream>
using namespace std;
int main(){
    
    int number[5];
    
    for(int i=0;i<5;i++){
        cin>>number[i];
    }
    int max=number[0];

    for(int i=0;i<5;i++){
        if(number[i]>max){
            max=number[i];
            
        }
        else{
            max=max;
        } 
    }
    cout<<max;
}