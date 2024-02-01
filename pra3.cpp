#include<iostream>
using namespace std;
class shape{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class circle:public shape{
    protected:
    int radius;
    public:
    circle(int r){
        radius=r;
    }
    float area(){
        return 3.14*radius*radius;
    }
    float perimeter(){
        return 2*3.14*radius;
    }
};
class rectangle:public shape{
    protected:
    int length;
    int breadth;
    public:
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    float area(){
        return length*breadth; 
    }
    float perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    shape* s;
     s = new circle(1);
    cout << "Circle Area: " << s->area() << endl;
    cout << "Circle Perimeter: " << s->perimeter() << endl;
    s=new rectangle(4,3);
     cout << "Rectangle Area: " << s->area() << endl;
    cout << "Rectangle Perimeter: " << s->perimeter() << endl;

}