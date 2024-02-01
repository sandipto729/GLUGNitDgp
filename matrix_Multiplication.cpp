#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    int A[r1][c1];
    for(int j=0;j<r1;j++){
        for(int i=0;i<c1;i++){
            cin>>A[j][i];
        }
    }
    cin>>r2>>c2;
    int B[r2][c2];
    for(int j=0;j<r2;j++){
        for(int i=0;i<c2;i++){
            cin>>B[j][i];
        }
    }

    int C[r1][c2];
    for(int j=0;j<r1;j++){
        for(int i=0;i<c2;i++){
            int value=0;
            for(int k=0;k<r2;k++){
                value+=A[j][k]*B[k][i];
            }
            C[j][i]=value;
        }
    }

    for(int j=0;j<r2;j++){
        for(int i=0;i<c2;i++){
            cout<<C[j][i];
        }
        cout<<endl;
    }
}