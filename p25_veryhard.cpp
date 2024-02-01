//If any element in matrix is 0 then make that row and coloum to 0

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int A[m][n];
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cin>>A[j][i];
        }
    }

    
    vector<int>V1;
     vector<int>V2;
    
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(A[j][i]==0){
                V1.push_back(j);
                V2.push_back(i);

            }
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            for(int k=0;k<V1.size();k++){
            if(j==V1[k]){A[j][i]=0;}
            
            }

        }
    }

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            for(int k=0;k<V2.size();k++){
            if(i==V2[k]){A[j][i]=0;}
            
            }

        }
    }


   
        

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<A[j][i];
        }
        cout<<endl;
    }


}