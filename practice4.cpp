#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n;
    m=(n-1)/2;
    for(j=1;j<=m;j++){
        for(i=1;i<=(j-1);i++){cout<<" ";}
        for(i=j;i<=j;i++){cout<<"*";}
        for(i=1;i<=2*(m-j)+1;i++){cout<<" ";}
        for(i=(n-j+1);i<=n-j+1;i++){cout<<"*";}
         for(i=1;i<=(j-1);i++){cout<<" ";}
         cout<<endl;


    }
    for(i=1;i<=m;i++){cout<<" ";}
    cout<<"*";
    for(i=1;i<=m;i++){cout<<" ";}
    cout<<endl;
    
    
    
        for(j=1;j<=m;j++){
        for(i=1;i<=(m-j);i++){cout<<" ";}
        for(i=1;i<=(1);i++){cout<<"*";}
        for(i=1;i<=2*(j)-1;i++){cout<<" ";}
        for(i=(4);i<=4;i++){cout<<"*";}
         for(i=1;i<=(m-j);i++){cout<<" ";}
         cout<<endl;


}
}