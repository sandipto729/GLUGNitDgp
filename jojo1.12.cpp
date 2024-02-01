#include<iostream>
using namespace std;
int main(){
    int i,j,n=6,m=5;
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
        if(i==1||i==n||j==1||j==m){cout<<i;}
        else{cout<<" ";}
    }
    cout<<endl;
    }
}