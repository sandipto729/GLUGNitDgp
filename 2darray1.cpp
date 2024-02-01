#include<iostream>
using namespace std;
int main(){
    int A[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int B[3][4]={45,34,56,23,45,4,5,5,3,4,6,78};
    int C[3][4];
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
            C[j][i]=A[j][i]+B[j][i];
        }
       
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
            cout<<"  "<<C[j][i];
        }
        cout<<endl;
        }
}