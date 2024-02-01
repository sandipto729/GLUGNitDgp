#include<iostream>
using namespace std;
int f(int n,int m){
    if(n==m)return m;
    return n+f(n+1,m);
}
int main(){
    int a=3,b=50;
   
    cout<<f(a,b);
}

/*int main(){
    int a=3,b=50;
    
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    cout<<sum;
}*/
/*int main(){
    int a=3,b=50;
    
    int n=b-a+1;
    int sum=n*(a+b)/2;
    cout<<sum;
}*/