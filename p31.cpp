#include<stdio.h>
int main(){
    int n,m,i=0,j=0,k=0;
    printf("Enter length of array 1 and array 2 : ");
    scanf("%d %d",&n,&m);
    int A[n],B[m],C[n+m];
    printf("Enter element in array 1 : ");
    for(int l=0;l<n;l++){
        scanf("%d",&A[l]);
    }
    printf("Eneter element in array 2 : ");
    for(int l=0;l<m;l++){
        scanf("%d",&B[l]);
    }
    while(i<n&&j<m){
        if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else{
            C[k++]=B[j++];
        }
    }
    while(i<n){
        C[k++]=A[i++];
    }
    while(j<m){
        C[k++]=B[j++];
    }
    printf("Merged sorted array 3 : ");
    for(int i=0;i<n+m;i++){
        printf("%d  ",C[i]);
    }
}