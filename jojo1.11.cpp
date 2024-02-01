#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
   
    for(j=1;j<=n;j++){
        for(i=j;i<=n;i++){
        cout<<i;
    }
    for(i=1;i<=(j-1);i++){
        cout<<i;
    }
    cout<<endl;
    }
}