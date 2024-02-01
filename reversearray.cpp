/*#include<iostream>
using namespace std;
int main(){
    int A[5]={1,2,3,4,5};
    cout<<"Enter rotate times : ";
    int k;
    cin>>k;
    int B[5];
    int j=0;
    int n=5;
    for(int i=n-k;i<n;i++){
        B[j++]=A[i];
    }
    for(int i=0;i<=k;i++){
        B[j++]=A[i];
    }

    for(int i=0;i<n;i++){
        cout<<B[i]<<" ";
    }

    
}
*/



#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> V;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        V.push_back(element);
    }
    int k=2;
    k=k%V.size();
    reverse(V.begin(),V.end());//5 4 3 2 1
    reverse(V.begin(),V.begin()+k-1);
    reverse(V.begin()+k,V.end());



for(int x:V){
    cout<<x<<" ";

}



    
}
