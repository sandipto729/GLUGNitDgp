#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n>>m;
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
            if(i==1||i==n||j==1||j==m){
                cout<<"*";

            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
}