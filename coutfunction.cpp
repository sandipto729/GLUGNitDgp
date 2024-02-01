#include<iostream>
using namespace std;
class complex{
  int real;
  int img;
  public:
  complex(int r,int i){
      real=r,img=i;
  }
  friend ostream & operator<<(ostream &o,complex c1);
};
ostream & operator<<(ostream &o,complex c1){
    o<<c1.real<<" + "<<c1.img<<"i";
    return o;
}
int main(){
    complex c1(9,8);
    cout<<c1;
}
 