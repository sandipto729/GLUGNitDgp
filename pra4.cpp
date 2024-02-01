/*#include<iostream>
using namespace std;
int fun();
class test{
private:
int a;
protected:
int b;
public:
int c;
friend int fun();
};
int fun(){
    test t;
    t.a=3;
    t.b=9;
    t.c=10;
    return t.a;
}
int main(){
    cout<<fun();
}*/
/*
#include<iostream>
using namespace std;
class Innova{
    public:
  static int price;
  int getPrice(){
      return price;
  }
};
int Innova::price=20;
int main(){
    cout<<Innova::getPrice;
    cout<<endl;
    Innova I1;
    cout<<I1.getPrice();
    cout<<endl;
}*/
#include<iostream>
using namespace std;
int partition(int*A,int l,int h,int n){
    int point=A[h];
    int i=l-1,j=l;
    while(j<h){
    if(A[j]<point){
        ++i;
        swap(A[i],A[j]);
        
    }
    j++;
    }
    swap(A[++i],A[h]);
    return i+1;
}
void quickSort(int *A,int l,int h,int n){
    if(l<h){
    int par=partition(A,l,h,n);
    quickSort(A,l,par-1,n);
    quickSort(A,par+1,h,n);
    }
}
int main(){
    int A[]={1,5,9,2,4};
    int n=sizeof(A)/sizeof(A[0]);
    quickSort(A,0,n-1,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}