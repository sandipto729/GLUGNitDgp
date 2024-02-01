#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n>>m;
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
            if((i+j)%2==1){cout<<"2";}
            else{cout<<"1";}
        }
        cout<<endl;
    }
}