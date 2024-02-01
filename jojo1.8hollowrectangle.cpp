#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    
    for(j=2;j<=(m-1);j++){
        for(i=1;i<=n;i++){
        if(i==1){cout<<"*";}
        else if(i==n){cout<<"*";}
        else{cout<<" ";}
    }
    cout<<endl;
    }
    for(i=1;i<=n;i++){
        cout<<"*";
    }
   }