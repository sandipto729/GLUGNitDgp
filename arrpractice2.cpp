/*#include<iostream>
#include<vector>
using namespace std;
void sort(int A[],int n){
    vector<int>ans;
    int l=0,h=n-1;
    while(l<h){
        if(abs(A[l])<abs(A[h])){
            ans.push_back(A[h]*A[h]);
            h--;
        }
        if(abs(A[l])>abs(A[h])){
        ans.push_back(A[l]*A[l]);
        l++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<"   ";
    }
}
int main(){
    int A[]={-10,-8,-5,2,3,6,9};
    int n=sizeof(A)/sizeof(A[0]);
    sort(A,n);
}*/
/*#include<iostream>
#include<vector>
using namespace std;
bool sort(int* A ,int n){
    int max=A[0],index=0;
   for(int i=0;i<n;i++){
       if(A[i]>max)
       max=A[i];
       index=i;
   }
   if(A[n-1]>A[0]){return false;}
   
   for(int i=0;i<=index;i++){
       if(A[i]>A[i+1])
       return false;
   }
  
   for(int i=index+1;i<n;i++){
       if(A[i]>A[i+1])
       return false;
   }
   return true;
}
int main(){
    int A[]={11,12,1,9};
    int n=sizeof(A)/sizeof(A[0]);
    
   cout<<sort(A,n);
}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int sum=0;
  
    for(int col=0;col<n;col++){
        if(col%2==0){
            for(int i=0;i<n;i++){
                sum+=A[i][col];
               cout<<sum<<" ";
            }
        }
        
        if(col%2==1){
            for(int i=n-1;i>=0;i--){
                sum+=A[i][col];
               cout<<sum<<" ";
            }
        }
        
    }
}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    vector<bool>prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
        }
        for(int j=2*i;j<n;j++){
            prime[j]=false;
        }
    }
    cout<<count;
}*/
/*#include<iostream>
using namespace std;
int uniquePair(int* A,int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==x){
                count++;
                A[i]=INT_MIN;
                A[j]=INT_MIN;

            }
        }
    }
    return count;
}
int main(){
    int A[]={3,1,3,5,3};
    int n=sizeof(A)/sizeof(A[0]);
    int x=6;
    cout<<uniquePair(A,n,x);
}*/
/*#include<iostream>
using namespace std;
int countDigit(int *A,int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(A[i]+A[j]+A[k]==x){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int A[]={-1,0,1,2,-1,-4};
    int x=0;
    int n=sizeof(A)/sizeof(A[0]);
    cout<<countDigit(A,n,x);
}
*/
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
void sorting(int* A,int n){
    for(int i=0;i<2;i++){
        for(int j=0;j<n-1;j++){
            if(A[j]==0&&A[j+1]!=0){
                swap(A[j],A[j+1]);
                
            }
        }
    }
}
int mian(){
    int A[]={3,0,2,0,1,5};
    int n=sizeof(A)/sizeof(A[0]);
    sorting(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<"  ";
    }
}

