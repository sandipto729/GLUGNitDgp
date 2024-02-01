#include<iostream>
#include<vector>
using namespace std;
void rotatearray(vector<vector<int > > &vec){
    //transpose
    int n=vec.size();
    for(int j=0;j<n;j++){
        for(int i=0;i<j;i++){
            swap(vec[j][i],vec[i][j]);
        }
    }
    
    //reverse every row
    
    for(int j=0;j<n;j++){
        
           reverse(vec[j].begin(),vec[j].end());
        
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    vector<vector<int > > ans(n,vector<int>(n));
    
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cin>>ans[j][i];
        }
    }
    
    rotatearray(ans);
    
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<ans[j][i];
        }cout<<endl;
    }
    
}