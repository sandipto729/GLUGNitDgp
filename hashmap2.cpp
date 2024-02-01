#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool canmakeEqual(vector<string>&v){
    map<char,int>mp;
    for(auto it:v){
        for(char c:it){
            mp[c]++;
        }
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second%v.size()!=0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<canmakeEqual(v);
}
//collegeee coll collegge
//wall ah wallahah