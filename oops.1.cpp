/*#include<iostream>
using namespace std;
class fruit{
    public:
  string name;
  string colour;
};
int main(){
    fruit apple;
    apple.name="Apple";
    apple.colour="Red";
    cout<<apple.name<<"  "<<apple.colour<<endl;
    
    fruit *mango=new fruit();
    mango->name="Mango";
    mango->colour="Yellow";
    cout<<mango->name<<"  "<<mango->colour<<endl;
    
    fruit banana;
    banana.name="Banana";
    banana.colour="Yellow";
    cout<<banana.name<<"  "<<banana.colour<<endl;

    cout<<apple.name<<"  "<<apple.colour<<endl;
}*/

/*
#include<iostream>
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
   rectangle(){
       length=1;
       bredth=1;
   }
   rectangle(int l,int b){
      setLength(l);
       setBredth(b);
   }
   rectangle(rectangle& r){
       length=r.length;
       bredth=r.bredth;
   }
   int area(){
       return length*bredth;
   }
   int perimeter(){
       return 2*(length+bredth);
   }
} ;
int main(){
    rectangle r1,r2(9,3),r3=r1,r4=r2;
    cout<<r1.area()<<endl<<r2.area()<<endl<<r3.area()<<endl<<r4.area()<<endl;
}*/
/*#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"Default parent"<<endl;
    }
    parent(int a){
        cout<<"Parametric Parent"<<endl;
    }
};
class child:public parent{
    public:
    child(){
        cout<<"Default child"<<endl;
    }
    child(int a){
        cout<<"Parametric child"<<endl;
    }
    child(int a,int x):parent(a){
        cout<<"Parametric child"<<endl;
    }
};
int main(){
    child c(9,10);
    
    
}*/
   