#include<iostream>
#include<vector>
using namespace std;

void bucketSort(float* A,int n){
    vector<vector<float> > V(n, vector<float> ());
    int maxEle=A[0],minEle=A[0];
   for(int i=0;i<n;i++){
       if(A[i]>maxEle){
           maxEle=A[i];
       }
   }
   
   for(int i=0;i<n;i++){
       if(A[i]<minEle){
           minEle=A[i];
       }
   }
   
   int normal=n/(maxEle-minEle);
   
    for(int i=0;i<n;i++){
     int index =int((A[i]-minEle)*normal);

        V[index].push_back(A[i]);
    }
    
    for(int i=0;i<n;i++){
       
            sort(V[i].begin(),V[i].end());
        
    }
    int k=0;
    float ans[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<V[i].size();j++){
            ans[k++]=V[i][j];
        }
    }
     for(int i=0;i<n;i++){
        cout<<ans[i]<<"  ";
    }
}
int main(){
    float A[]={5.12,1.15,7.56,2.45,1.13,2.24,5.71};
    int n=sizeof(A)/sizeof(A[0]);
    bucketSort(A,n);
   
}