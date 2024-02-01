#include<iostream>
using namespace std;

#define N 10
int determinant(int A[N][N], int n);
void cofactor(int mat[N][N], int temp[N][N], int p, int q, int n);
int determinant(int A[N][N], int n) {
    int ans=0;
    int temp[N][N];
    if(n==1)return A[0][0];
    int sign=1;
    for(int i=0;i<n;i++){
        cofactor(A,temp,0,i,n);
        ans+=sign*A[0][i]*determinant(temp,n-1);
        sign=-sign;
    }
    
    return ans;
}
void cofactor(int mat[N][N], int temp[N][N], int p, int q, int n){
    int i=0,j=0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if (row != p && col != q) {
            temp[i][j++] = mat[row][col];

                if (j == n - 1) {
                    j = 0;
                    i++;
                }
        }
    }
}
}
int main() {
    int n = 3;
    int A[N][N];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << determinant(A, n);

    return 0;
}
