#include<iostream>
using namespace std;
class stack{
  int capacity;
  int* arr;
  int top;
  public:
  stack(int val){
      this->capacity=val;
      arr=new int[val];
      this->top=-1;
  }
  void push(int val){
      if(this->top==this->capacity-1){
          cout<<"Over Flow\n";
          return;
      }
      this->top++;
      this->arr[this->top]=val;
  }
  void pop(){
      if(this->top==-1){
          cout<<"Under Flow\n";
          return;
      }
      this->top--;
      
  }
  int topEle(){
      if(this->top==-1){
          cout<<"Under Flow\n";
      }
      return this->arr[this->top];
  }
  bool isEmpty(){
      if(this->top==-1){
          return true;
      }
      return false;
  }
  int size(){
      return this->top+1;
  }
  bool isFull(){
      return this->top==this->capacity-1;
  }
};
int main(){
    stack stc(10);
    stc.push(11);
    stc.push(22);
    stc.push(33);
    stc.push(44);
    stc.push(55);
    cout<<stc.size()<<endl;
    cout<<stc.topEle()<<endl;
    stc.pop();
    cout<<stc.topEle()<<endl;
}