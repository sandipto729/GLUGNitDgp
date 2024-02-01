#include<iostream>
#include<vector>
using namespace std;
bool canGo(int row,int col,vector<vector<char> >ans){
    for(int i=row-1;i>=0;i--){
        if(ans[i][col]=='Q')return false;
    }
    for(int i=row-1, j=col-1;i>=0&&j>=0;i--,j--){
        if(ans[i][j]=='Q')return false;
    }
    for(int i=row-1,j=col+1;i>=0&&j<ans.size();i--,j++){
         if(ans[i][j]=='Q')return false;
    }
    return true;
}
void f(int currRow,int n,vector<vector<char> >&ans){
    if(currRow==n){
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"\n******\n";
        return;
       
    }
    for(int col=0;col<n;col++){
        if(canGo(currRow,col,ans)){
            ans[currRow][col]='Q';
            f(currRow+1,n,ans);
            ans[currRow][col]='.'; 
        }
    }
}
int main(){
    int n=4;
    vector<vector<char> >ans(n,vector<char>(n,'.'));
    f(0,n,ans);
    return 0;
}