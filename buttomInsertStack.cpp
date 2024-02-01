/*#include<iostream>
#include<stack>
using namespace std;
void insertButtom(stack<int>&stc,int val){
    stack<int>stc1;
    while(!stc.empty()){
        stc1.push(stc.top());
        stc.pop();
    }
    stc1.push(val);
    while(!stc1.empty()){
        stc.push(stc1.top());
        stc1.pop();
    }
}
int main(){
stack<int>stc1;
stc1.push(1);
stc1.push(2);
stc1.push(3);
stc1.push(4);
stc1.push(5);
insertButtom(stc1,34);

while(!stc1.empty()){
    cout<<stc1.top()<<"  ";
    stc1.pop();    
}

}*/
/*
#include<iostream>
#include<stack>
using namespace std;
void pushButtom(stack<int>&stc,int val){
    if(stc.empty()){
        stc.push(val);
        return;
    }
    int top_ele=stc.top();
    stc.pop();
    pushButtom(stc,val);
    stc.push(top_ele);
}
int main(){
    stack<int>stc;
    stc.push(1);
    stc.push(2);
    stc.push(3);
    stc.push(4);
    stc.push(5);
    pushButtom(stc,34);
    while(!stc.empty()){
        cout<<stc.top()<<"  ";
        stc.pop();
    }
}*/
//Insert at any Position
#include<iostream>
#include<stack>
using namespace std;
void pushButtom(stack<int>&stc,int val,int pst){
    if(stc.size()==pst-1){
        stc.push(val);
        return;
    }
    int top_ele=stc.top();
    stc.pop();
    pushButtom(stc,val,pst);
    stc.push(top_ele);
}
int main(){
    stack<int>stc;
    stc.push(1);
    stc.push(2);
    stc.push(3);
    stc.push(4);
    stc.push(5);
    pushButtom(stc,0,3);
    while(!stc.empty()){
        cout<<stc.top()<<"  ";
        stc.pop();
    }
}
//recursion method 
#include<iostream>
#include<stack>
using namespace std;

void deleteButtom(stack<int>& stc) {
  if(stc.size()==1){
      stc.pop();
      return;
  }
  int top_ele=stc.top();
  stc.pop();
  deleteButtom(stc);
  stc.push(top_ele);
}

int main() {
    stack<int> stc;
    stc.push(1);
    stc.push(2);
    stc.push(3);
    stc.push(4);
    stc.push(5);

    deleteButtom(stc);

    while (!stc.empty()) {
        cout << stc.top() << "  ";
        stc.pop();
    }

    return 0;
}
