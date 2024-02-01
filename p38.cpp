#include<iostream>
#include<vector>
using namespace std;
int main(){
   int A[]={1,2,3,4,5};
   int B[]={2,4,6,8,10,12};
   int n=5,m=6;
    int i=0,j=0;
    while(i<n&&j<m){
        if(A[i]<B[j]){
            A[i]=INT_MIN;
            i++;
        }
        if(A[i]>B[j]){
            B[j]=INT_MIN;
            j++;
        }
        else{
            cout<<A[i];
        }
    }
}