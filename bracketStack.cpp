#include<iostream>
#include<stack>
using namespace std;
bool check(string str){
    stack<char>stc;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
        stc.push(str[i]);
        }
        if(!stc.empty()){
        if(str[i]==')'){
            if(stc.top()=='(')stc.pop();
            else{
                return false;
            }
        }
        
        if(str[i]=='}'){
            if(stc.top()=='{')stc.pop();
            else{
                return false;
            }
        }
        if(str[i]==']'){
            if(stc.top()=='[')stc.pop();
            else{
                return false;
            }
        }
    }
    else{
        return false;
    }
    }
    return stc.empty();
    }

int main(){
    string str="({{}[]}()())";
    cout<<check(str);
}