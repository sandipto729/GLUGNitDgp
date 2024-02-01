#include<iostream>
#include<vector>
using namespace std;
void spiralelement(vector<vector<int> >V){
    vector<int>ans;
    int row=V.size();
    int col=V[0].size();
    int count=0;
    int total=row*col;
    //syntex
    int startRow=0;
    int startColoum=0;
    int endRow=row-1;
    int endColoum=col-1;
    //loop
    while(count<total){
        //1st row
        for(int i=startColoum;count<total&&i<=endColoum;i++){
            ans.push_back(V[startRow][i]);
            count++;
        }
        startRow++;
        //last coloum
        for(int i=startRow;count<total&&i<=endRow;i++){
            ans.push_back(V[i][endColoum]);
            count++;
        }
        endColoum--;
        //last row
        for(int i=endColoum;count<total&&i>=startColoum;i--){
            ans.push_back(V[endRow][i]);
            count++;
        }
        endRow--;
        //1st coloum
        for(int i=endRow;count<total&&i>=startRow;i--){
            ans.push_back(V[i][startColoum]);
            count++;
        }
        startColoum++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<vector<int> >V{
        {1,2,3,4},
        {4,5,6,7},
        {7,8,9,10}
    };
    spiralelement(V);
}