#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n;//9
    m=(n-1)/2;//4
    for(j=1;j<=m;j++){
        for(i=1;i<=m-j+1;i++){
        cout<<" ";
    }
    for(i=1;i<=2*j-1;i++){
        cout<<i;
    }
    for(i=1;i<=m-j;i++){
        cout<<" ";
    }
    cout<<endl;
}
    for(i=1;i<=n;i++){
    cout<<i;
    }
    cout<<endl;
    for(j=1;j<=m;j++){
        for(i=1;i<=j;i++){
        cout<<" ";
    }
    for(i=1;i<=2*(m-j)+1;i++){
        cout<<i;
    }
    for(i=1;i<=m;i++){
        cout<<" ";
    }
    cout<<endl;
}




}