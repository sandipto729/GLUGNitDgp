/*#include<iostream>
using namespace std;
int main(){
    int A[]={1,0,1,0,1,1,0,1,0,0,1};
    int size=sizeof(A)/sizeof(A[0]);
    int B[size];
    int j=0;
    for(int i=0;i<size;i++){
       
            if(A[i]==0){
                B[j++]=A[i];
            }
            }
    
    
    
    for(int i=0;i<size;i++){
       
            if(A[i]==1){
                B[j++]=A[i];
            }
            }
   
   
   
   
   
    for(int i=0;i<size;i++){
        cout<<B[i]<<" ";
    }
}







#include<iostream>
using namespace std;
int main(){
    int A[]={1,0,0,1,1,0,1},count=0;
    int size=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<size;i++){
        if(A[i]==0){count++;}
    }
    for(int i=1;i<=count;i++){
    cout<<"0 ";}
     for(int i=1;i<=size-count;i++){
    cout<<"1 ";}



}*/


#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int>vector){
int left_pointer=0,right_pointer=vector.size()-1;
while(left_pointer<right_pointer){
    if(vector[left_pointer]==1&&vector[right_pointer]==0){
        vector[left_pointer]=0;
        vector[right_pointer]=1;
         left_pointer++;
         right_pointer--;
    }
    else if(vector[left_pointer==0]){left_pointer++;}
    else if(vector[right_pointer==1]){right_pointer--;}
       
}
return;

}
int main(){
    vector<int>V;
    cout<<"Enter Element : ";
    V.push_back(1);
    V.push_back(0);
    V.push_back(0);
    V.push_back(1);
    V.push_back(0);
    V.push_back(1);

    
    sortZeroAndOne(V);
    
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    


}