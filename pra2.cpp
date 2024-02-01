// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int power(int n,int m){
    if(m==0)return 1;
    if(m%2==0){
        int ans1=power(n,m/2);
        return ans1*ans1;
    }
    if(m%2==1){
        int ans2=power(n,m/2);
        return n*ans2*ans2;
    }
    return -1;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("Power : %d",power(n,m));
}