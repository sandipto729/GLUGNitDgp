#include<iostream>
#include<map>
using namespace std;
int main(){
    string str1="triangle";
    string str2="integral";
    if(str1.size()!=str2.size()){
        cout<<"0";
        return 0;
    }
    map<char,int>mp1;
    map<char,int>mp2;
    for(int i=0;i<str1.size();i++){
        mp1[str1[i]]++;
    }
    for(int i=0;i<str2.size();i++){
        mp2[str2[i]]++;
    }
    auto it1=mp1.begin();
    auto it2=mp2.begin();
    while(it1!=mp1.end()&&it2!=mp2.end()){
        if(it1->first!=it2->first&&it1->second!=it2->second){
            cout<<"0";
            return 0;
        }
    }
    if(it1!=mp1.end()&&it2!=mp2.end()){
        cout<<"0";
            return 0;
    }
    cout<<"1";
    return 0;
}