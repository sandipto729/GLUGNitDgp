/*#include<iostream>
using namespace std;
class rectangle{
  int length;
  int bredth;
  public:
  void setLength(int l){
      if(l>0){
          length=l;
      }
      else{
          length=0;
      }
  }
  void setBredth(int b){
      if(b>0){
          bredth=b;
      }
      else{
          bredth=0;
      }
  }
  rectangle(int l,int b){
      setLength(l);
      setBredth(b);
  }
  int perimeter();
};
int rectangle::perimeter(){
    return length*bredth;
}
int perimeter(){
    return 1;
}
int main(){
    rectangle r(4,3);
    cout<<r.perimeter()<<endl;
    cout<<perimeter();
}

*/#include<iostream>
using namespace std;
class rectangle {
  int length,bredth;
  public:
  rectangle();
  rectangle(int l,int b);
  rectangle(rectangle& r);
  void setLength(int l);
  void setBredth(int b);
  int getLength(){
      return length;
  }
  int getBredth(){
      return bredth;
  }
  int area();
  int perimeter();
  bool isSquare();
  ~rectangle();
};
rectangle::rectangle(){
    length=1;
    bredth=1;
}
rectangle::rectangle(int l,int b){
    length=l;
    bredth=b;
    
}
rectangle::rectangle(rectangle& r){
    length=r.length;
    bredth=r.bredth;
}
void rectangle::setLength(int l){
    if(l>0)length=l;
    else{
        length=0;
    }
}
void rectangle::setBredth(int b){
    if(b>0)bredth=b;
    else{
        bredth=0;
    }
}
int rectangle::area(){
    return length*bredth;
}
int rectangle::perimeter(){
    return 2*(length+bredth);
}
bool rectangle::isSquare(){
    return length==bredth;
}
rectangle::~rectangle(){
    cout<<"Rectangle is destroyed";
}
int main(){
    rectangle r,R(9,7);
    cout<<r.area()<<" "<<R.area()<<endl;
    cout<<r.getLength()<<" "<<r.getBredth()<<" "<<R.getLength()<<" "<<R.getBredth()<<endl;
    cout<<r.perimeter()<<" "<<R.perimeter()<<endl;
    cout<<r.isSquare()<<" "<<R.isSquare()<<endl;
}