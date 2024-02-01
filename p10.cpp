#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n;
    m=(n-1);
    for(j=1;j<=n;j++){
        for(i=1;i<=(n-j);i++){
            cout<<" ";
        }
        for(i=65;i<=(2*j-2)+65;i++){
            cout<<(char)i;
        }
        for(i=1;i<=(n-j);i++){
            cout<<" ";
        }
        cout<<endl;

    }
    for(j=1;j<=m;j++){
        for(i=1;i<=j;i++){cout<<" ";}
        for(i=65;i<=2*(m-j)+65;i++){cout<<(char)i;}
        for(i=1;i<=j;i++){cout<<" ";}
        cout<<endl;
    }
}