#include<iostream>
using namespace std;
#include<stack>
int extraBracket(string str){
    stack<char>stc;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            stc.push(str[i]);
        }
        if(str[i]==')'){
            if(stc.top()=='('){
                stc.pop();
            }
            else{
                count++;
            }
        }
        if(str[i]=='}'){
            if(stc.top()=='{'){
                stc.pop();
            }
            else{
                count++;
            }
        }
        if(str[i]==']'){
            if(stc.top()=='['){
                stc.pop();
            }
            else{
                count++;
            }
        }
    }
    int count2=0;
    while(!stc.empty()){
        count2++;
        stc.pop();
    }
    return count+count2;
}
int main(){
    string str="[(({})])";
    cout<<extraBracket(str);
}