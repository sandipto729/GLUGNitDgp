/*#include<iostream>
using namespace std;
int sum(int n){
    
    if(n==0)return 0;
    if(n%2==0){
        return -n+sum(n-1);
    }
    else{
        return n+sum(n-1);
        }
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}*//*
#include<iostream>
#include<math.h>
int armstrong(int n){
return pow((n%10),3)+armstrong(n/10);
}
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<armstrong(n);
}

#include<iostream>
using namespace std;
int gcd(int m,int n,int c){
    if(c==1)return 1;
    if((m%c==0)&&(n%c==0)){return c;}
    gcd(m,n,c-1);
}
int main(){
    int m,n;
    cin>>m>>n;
    int c=min(m,n);
    cout<<gcd(m,n,c);
}

#include<iostream>
using namespace std;
int gcd(int n,int m){
    if(n==m)return n;
    if(n>m)return gcd(n-m,m);
    if(m>n)return gcd(n,m-n);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
}

#include<iostream>
#include<math.h>
using namespace std;
int armstrong(int n){
    if(n==1||n==0)return n;
    return pow((n%10),3)+armstrong(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<armstrong(n);
}
*/
#include<iostream>
using namespace std;
int gcd(int n,int m){
    if(n==m)return n;
    if(n>m)return n%m;
    if(n<m)return m%n;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
}
