#include<iostream>
#include<vector>
using namespace std;
void solve(string digit,string output,int idx,vector<string>&ans,vector<string>&mapping){
    if(idx==digit.size()){
        ans.push_back(output);
        return;
    }
    int dig=digit[idx]-'0';
    string map=mapping[dig];
    
    for(int i=0;i<map.size();i++){
        output+=map[i];
        solve(digit,output,idx+1,ans,mapping);
        output.pop_back();
    }
}
int main(){
    string str="23";
    vector<string> mapping = {"", "", "abc", "def", "ghi"};
    vector<string>ans;
    
    solve(str,"",0,ans,mapping);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}