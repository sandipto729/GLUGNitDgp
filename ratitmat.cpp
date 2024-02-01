#include<iostream>
using namespace std;
#include<vector>
bool check(int a,int b,vector<vector<int > >&grid){
    
    return (a<grid.size()&&b<grid.size()&&a>=0&&b>=0&&grid[a][b]==1);
    
}
int f(int i,int j,vector<vector<int > >&grid){
    int n=grid.size();
    if(i==n-1&&j==n-1)return 1;
    if(i>=n||j>=n)return 0;
    int ans=0;
    grid[i][j]=2;
    if(check(i+1,j,grid)){
        ans+=f(i+1,j,grid);
    }
    if(check(i-1,j,grid)){
        ans+=f(i-1,j,grid);
    }
    if(check(i,j+1,grid)){
        ans+=f(i,j+1,grid);
    }
    if(check(i,j-1,grid)){
        ans+=f(i,j-1,grid);
    }
    grid[i][j]=1;
    return ans;
}
int main(){
    vector<vector<int> >v{
        {1,1,1,1},
        {0,1,0,1},
        {0,1,1,1},
        {0,1,1,1}
    };
    cout<<f(0,0,v);
    return 0;
}