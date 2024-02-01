#include<iostream>
using namespace std;
int noOfWays(int i,int j,int n,int m){
    if(i==n-1||j==m-1)return 1;
    if(i>=n||j>=m)return 0;
    return noOfWays(i+1,j,n,m)+noOfWays(i,j+1,n,m);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<noOfWays(0,0,n,m);
}