#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> >v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int ans=0;
            if(j==0||j==i){
                v[i].push_back(1);
            }
            else{
                
                v[i].push_back(v[i-1][j]+v[i-1][j-1]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
}