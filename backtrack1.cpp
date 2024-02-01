#include<iostream>
#include<vector>
using namespace std;
void f(string str,int i,vector<string>&ans){
    if(i==str.size()){
        ans.push_back(str);
        return;
    }
    for(int j=i;j<str.size();j++){
        swap(str[i],str[j]);
        f(str,i+1,ans);
        swap(str[i],str[j]);
    }
}
int main(){
    string str="abc";
    vector<string>ans;
    f(str,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}


//Method 2
#include<iostream>
using namespace std;
#include<vector>
void f(string str,string res,vector<string>&ans){
    if(str.empty()){
        ans.push_back(res);
        return;
    }
    for(int i=0;i<str.size();i++){
        string sub=str.substr(0,i)+str.substr(i+1);
        f(sub,res+str[i],ans);
    }
    
}
int main(){
    string str="pqr";
    vector<string>ans;
    f(str,"",ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}