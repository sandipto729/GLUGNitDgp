#include<iostream>
using namespace std;
int main(){
    int i,first,a,b,c,second,third;
    cout<<"ARMSTRONG no b/w 100 & 500 is  : "<<endl;//i=370
    for(i=100;i<=500;i++){
        first=i%10;//0
        a=(i-first)/10;//37
        second=a%10;//7
        third=(a-second)/10;//3
        if(i==(first*first*first)+(second*second*second)+(third*third*third)){
            cout<<i<<endl;
        }
    }

}