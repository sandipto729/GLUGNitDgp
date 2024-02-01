#include<iostream>
using namespace std;
#include<stack>
int cal(int v1,int v2,char op){
    int ans;
    if(op=='+'){
        ans=v1+v2;
    }
   else if(op=='-'){
        ans=v1-v2;
    }
    else if(op=='*'){
        ans=v1*v2;
    }
   else if(op=='/'){
        ans=v1/v2;
    }
    return ans;
}
int preference(char ch){
    if(ch=='+'||ch=='-'){
        return 1;
    }
    else if(ch=='*'||ch=='/'){
        return 2;
    }
    return -1;
}
int inFlix(string str){
    stack<int>nums;
    stack<char>opes;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9'){
            nums.push(str[i]-'0');
        }
        else if(str[i]=='('){
            opes.push(str[i]);
        }
        else if(!opes.empty() && str[i]==')'){
            while(opes.top()!='('){
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                char op=opes.top();
                opes.pop();
                nums.push(cal(v1,v2,op));
            }

        }
        else{
            while(!opes.empty() && preference(str[i])<preference(opes.top())){
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                char op=opes.top();
                opes.pop();
                nums.push(cal(v1,v2,op));
            }
            opes.push(str[i]);
        }
        
    }
    while(!opes.empty()){
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                char op=opes.top();
                opes.pop();
                nums.push(cal(v1,v2,op));
    }
    return nums.top();
}
int main(){
    string str="2*(6+8-9+1)/3-2";
    cout<<inFlix(str);
}