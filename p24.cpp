/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************
#include<iostream>
#include<vector>
using namespace std;


void runningSum(vector<int>&a) {
for (int i = 1; i < a.size(); i++){
a[i] += a[i - 1];
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
    
    runningSum(V);
    
    for(int i=0;i<5;i++){
        cout<<V[i]<<" ";
    }
}

#include<iostream>
using namespace std;
#include<vector>
int sum(vector<int>v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
int main(){
    vector<int>V;
vector<int>V1;
vector<int>V2;

for(int i=0;i<5;i++){
    int ele;
    cin>>ele;
    V.push_back(ele);
}

int j1=0;


for(int i=0;i<5;i++){
    V1[j1++]=V[i];
    
}
for(int i=0;i<5;i++){
    cout<<V1[i]<<" ";
}


}



#include<iostream>
using namespace std;
#include<vector>

bool sum(vector<int>&V){
    int sum=0,prefix_sum=0,suffix_sum=0;
    for(int i=0;i<V.size();i++){
        sum+=V[i];
    }
    for(int i=0;i<V.size();i++){
    prefix_sum+=V[i];
    suffix_sum=sum-prefix_sum;
    if(prefix_sum==suffix_sum){return true;}
    
    }
    return false;
    }
    
int main(){
    vector<int>V;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        V.push_back(ele);
    }
    
   cout<<sum(V)<<endl;
}














#include<iostream>
using namespace std;
int main(){
    int A[5];
    for(int i=0;i<5;i++){
        cin>>A[i];
    }
int sum=0,sum1=0,sum2=0;
    for(int i=0;i<5;i++){
        sum+=A[i];
    }

    for(int i=0;i<5;i++){
        sum1+=A[i];
        sum2=sum-sum1;
        if(sum1==sum2){cout<<true;}
    }
    cout<<"\n"<<false;
}






#include<iostream>
using namespace std;
#include<vector>
int sum(vector<int>V,int l,int h){
    int sum=0;
    for(int i=l-1;i<h;i++){
        sum+=V[i];
    }
    return sum;

}
int main(){
 vector<int>V;
 int n;
 cout<<"Enter the size of Vector : ";
 cin>>n;
 for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    V.push_back(ele);
 }
 int l,h;
 cout<<"Enter low point : ";
 cin>>l;
 cout<<"Enter higher point : ";
 cin>>h;
 cout<<sum(V,l,h)<<endl;
}



#include<iostream>
using namespace std;
#include<vector>
int prefix_sum(vector<int>V,int r){
    int prefixsum=0;
    for(int i=0;i<=r-1;i++){
        prefixsum+=V[i];
    }
    return prefixsum;
}
int main(){
    vector<int>V;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        V.push_back(ele);
    }
    int l,h;
    cout<<"Enter min position : ";
    cin>>l;
    cout<<"Enter max position : ";
    cin>>h;
    int sum1=prefix_sum(V,h)-prefix_sum(V,l)+V[l-1];
    cout<<sum1;
    
    
    
}

#include<iostream>
using namespace std;
int main(){
    for(int j=1;j<=5;j++){
        for(int i=1;i<=j;i++){
        if(i%2!=0){
            cout<<i<<" ";
            i+=2;}

        else{
            cout<<i<<" ";
            i+=2;
        }
        }
    }
}



#include<iostream>
using namespace std;
void fun(int a){
   a=a+2;
    return;
}
int main(){
    int a;
    cin>>a;
    fun(a);
    cout<<a;

}


#include<iostream>
#include<vector>
using namespace std;
*/
/*int even(vector<int>v){
    int count_even=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){count_even++;}
    }
    return count_even;
}



int odd(vector<int>v){
    int count_odd=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2!=0){count_odd++;}
    }
    return count_odd;
}





int main(){
    vector<int>V;
    int n;
    cout<<"Enter element of vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        V.push_back(ele);
    }
    cout<<"Even : "<<even(V)<<", Odd : "<<odd(V);
}
int main(){
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
       int ele;
       cin>>ele;
       v.push_back(ele);
    }
    int i=INT_MAX;
    int j=INT_MIN;
    cout<<i<<" "<<j;
    
}


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    int n;
    cout<<"Enter size of parent vector : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        V.push_back(i+1);
    }
    
    
    vector<int>V1;
    int n1;
    cout<<"Enter size of second vector : ";
    cin>>n1;
    
    for(int i=0;i<n1;i++){
        int ele;
        cin>>ele;
        V1.push_back(ele);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            if(V[i]==V1[j]){V[i]=-1;}
        }
    }
    
    for(int i=0;i<n;i++){
        if(V[i]!=-1){cout<<V[i]<<" ";}
    }
    
    
}


#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    int A[n];
    
    cout<<"Enter the digits of Array : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int size=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
        for(int k=i-1;k<size;k++){
        if(A[i]>A[j] && A[i]<A[k]){A[i]=-1;}
    }
    }
    }
    for(int i=1;i<size-1;i++){
        if(A[i]!=-1){cout<<A[i]<<" ";}
       
    }
  
}


#include <stdio.h>  
 int main()  
 {  
int n;  
printf("enter the number "); 
scanf("%d ", &n);  
for (int i=n;i<=n*10; i=i+n)  
{  printf("%d ",i);  }  
    return 0;  
} 
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<i*n<<" ";
    }
}
*/

#include<iostream>
#include<vector>
using namespace std;

int min_index(vector<int>A){
    int min=A[0],min_index=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<min){
        min_index=i;
        }
    }
    return min_index;
}
int main(){
    vector<int>V;
    for(int i=0;i<5;i++){
     int ele;
     cin>>ele;
     V.push_back(ele);
    }
    vector<int>B;

    cout<<V[min_index(V)];
    V[min_index(V)]=0;
     cout<<V[min_index(V)];
    V[min_index(V)]=0;
     cout<<V[min_index(V)];
    V[min_index(V)]=0;
    

    /*for(int i=0;i<V.size();i++){
        cout<<V[i];
    B.push_back(max(V)*max(V));
    
    V[max_index(V)]=0;
    
}*/
/*reverse(B.begin(),B.end());
for(int i=0;i<V.size();i++){
    cout<<B[i]<<" ";
}*/
}

