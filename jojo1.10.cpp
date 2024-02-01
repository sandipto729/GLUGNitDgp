#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cin>>m;
    for(j=1;j<=m;j++){
        for(i=1;i<=(m-j);i++){cout<<" ";}
        for(i=1;(i<=2*j-1);i++){cout<<"*";}
         for(i=1;i<=(m-j);i++){cout<<" ";}
         cout<<endl;

    }

}