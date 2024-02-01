#include<iostream>
#include<vector>
using namespace std;
int maxiumOneRow(vector<vector<int > > &V){
    int maxOne=INT_MIN;
    int maxOneRow=-1;
    int coloumns =V[0].size();
    for(int j=0;j<V.size();j++){
        for(int i=0;i<V[0].size();i++){
            if(V[j][i]==1){
                int numberOfOnes=coloumns-i;
                if(numberOfOnes>maxOne){
                maxOne=numberOfOnes;
                maxOneRow=j;}
                 break;


            }
           
        }
    }
    return maxOneRow;

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int > > vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }


    int res=maxiumOneRow(vec);
    cout<<"Ans : "<<res<<endl;
}