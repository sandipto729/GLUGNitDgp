#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;
    cin>>n;
    for(j=1;j<=n;j++){
        for(i=1;i<=j;i++){
            cout<<"*";
            }
            for(i=1;i<=2*(n-j);i++){cout<<" ";}
            for(i=1;i<=j;i++){
            cout<<"*";
            }
        cout<<endl;
    }
    for(j=1;j<=n;j++){
        for(i=1;i<=(n-j)+1;i++){cout<<"*";}//n=4
        for(i=1;i<=(2*j-2);i++){cout<<" ";}
         for(i=1;i<=(n-j)+1;i++){cout<<"*";}
         cout<<endl;

    }
}


