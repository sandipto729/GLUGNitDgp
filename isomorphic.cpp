#include<iostream>
#include<map>
#include<vector>
using namespace std;
bool isisomorphic(string str1,string str2){
    if(str1.size()!=str2.size())return false;
    map<char,char>mp;
    for(int i=0;i<str1.size();i++){
        if(mp.find(str1[i])!=mp.end()){
            if(mp[str1[i]]!=str2[i])return false;
        }
        else{
            mp[str1[i]]=str2[i];
        }
    }
    mp.clear();
    for(int i=0;i<str1.size();i++){
        if(mp.find(str2[i])!=mp.end()){
            if(mp[str2[i]]!=str1[i])return false;
        }
        else{
            mp[str2[i]]=str1[i];
        }
    }
    return true;
}
int main(){
    string str1="aabc";
    string str2="xxyx";
    cout<<isisomorphic(str1,str2);
}