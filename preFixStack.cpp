#include<iostream>
#include<stack>
using namespace std;
int postFix(string str){
    stack<int>stc;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]>='0'&&str[i]<='9'){
            stc.push(str[i]-'0');
        }
        if(str[i]=='+'){
            int a=stc.top();
            stc.pop();
            int b=stc.top();
            stc.pop();
            stc.push(a+b);
        }
        if(str[i]=='-'){
            int a=stc.top();
            stc.pop();
            int b=stc.top();
             stc.pop();
            stc.push(b-a);
        }
        if(str[i]=='*'){
            int a=stc.top();
            stc.pop();
            int b=stc.top();
             stc.pop();
            stc.push(a*b);
        }
        if(str[i]=='/'){
            int a=stc.top();
            stc.pop();
            int b=stc.top();
             stc.pop();
            stc.push(a/b);
        }
    }
    return stc.top();
}
int main(){
    string str="-9+*531";
    cout<<postFix(str);
}