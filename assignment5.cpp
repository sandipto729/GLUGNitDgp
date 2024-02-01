#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> >V
    {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
        };
    vector<int>zeroRow;
    vector<int>zeroColoum;
    
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[0].size();j++){
            if(V[i][j]==0){
                zeroRow.push_back(i);
                zeroColoum.push_back(j);
            }
        }
    }
    
    vector<vector<int> >ans(V.size(),vector<int>(V[0].size()));

     for(int i=0;i<V.size();i++){
        for(int j=0;j<V[0].size();j++){

            if((i=zeroRow[0])||(i=zeroRow[1])||(j=zeroColoum[0])||(j=zeroColoum[1])){
                ans[i][j]=0;
            }
            else{
            ans[i][j]=V[i][j];
            
        }
            }

        }
     

     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
     }
}

    
