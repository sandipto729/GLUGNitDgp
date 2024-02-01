/*
#include<iostream>
#include<vector>
using namespace std;
// 1st even  then odd


void Sequence(vector<int>&a){
    int i=0,j=a.size()-1;
    while(i<j){
            if(a[i]%2!=0 && a[j]%2==0 ){
                swap(a[i],a[j]);
                i++;
                j--;


            }
            if(a[i]%2==0){i++;}
            if(a[j]%2!=0){j--;}
    }
    return;
}


int main(){
    vector<int>V;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        V.push_back(ele);
    }
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);
    V.push_back(4);
    V.push_back(5);


    Sequence(V);

    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
}





void sortArrayByParity(vector<int>& a) {
int i = 0, j = a.size()-1;
while(i < j) {
if(a[i] % 2 == 1 && a[j] % 2 == 0) {
swap(a[i], a[j]);
i++, j--;
}
if(a[i] % 2 == 0) i++;
if(a[j] % 2 == 1) j--;
}
return ;
}


int main(){
    vector<int>V;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        V.push_back(ele);
    }
   
     Sequence(V);

    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
}


// practice - square in a sequence order

#include<iostream>
#include<vector>
int max1(int A[],int size){
    int max=A[0];
    for(int i=0;i<size;i++){
    if(A[i]>max){max=A[i];}
    
    }
    return max;
}





int max2(int A[],int size){
    int max=A[0],max_index=-1;
    for(int i=0;i<size;i++){
    if(A[i]>=max){max=A[i],max_index=i;}
    
    }
    return max_index;
}






using namespace std;
int main(){
    int Array[5];
    cout<<"Enter the digits of Array : ";
    for(int i=0;i<5;i++){
        cin>>Array[i];
    }
    int size=sizeof(Array)/sizeof(Array[0]);
    int B[5];
    
    for(int i=0;i<5;i++){
        B[i]=(Array[i])*(Array[i]);// 100 9 4 16 64
    }
   

  for (int i=1;i<=size;i++){
   cout<<max1(B,5)<<"  ";
   
   B[max2(B,5)]=0;
  }
   



    
   
}

*/


#include<iostream>
#include<vector>
using namespace std;
void sortSquared(vector<int>&v){
    vector<int>ans;
    int i=0,j=v.size()-1;
    while(i<=j){
        if(abs(i)<abs(j)){
            ans.push_back(v[j]*v[j]);
            j--;
        }
        else{
            ans.push_back(v[i]*v[i]);
            i++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>V;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
    V.push_back(ele);
}
sortSquared(V);

for(int i=0;i<V.size();i++){
    cout<<V[i]<<" ";
}
}


