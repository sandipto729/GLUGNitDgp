#include<iostream>
using namespace std;
int main(){
        int i,n,sum1=0,sum2=0;
        cin>>n;
        if(n%2==1){
            for(i=1;i<=n;i=i+2){sum1=sum1+i;}
            for(i=2;i<=(n-1);i=i+2){sum2=sum2+i;}
            cout<<"Sum of the series : "<<sum1-sum2;
        }
        else if(n%2==0){
            for(i=1;i<=n;i=i+2){sum1=sum1+i;}
            for(i=2;i<=(n);i=i+2){sum2=sum2+i;}
            cout<<"Sum of the series : "<<sum1-sum2;
           
        }
    }
