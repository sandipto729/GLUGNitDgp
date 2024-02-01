//binary search in proper increasing
#include<iostream>
#include<vector>
using namespace std;
int findPoint(vector<vector<int> >V,int x){
    int row=V.size();
    int col=V[0].size();
   
    int l=0,h=row*col-1,mid=(l+h)/2;
    while(l<h){
        if(V[mid/col][mid%col]==x){
          return mid;
        }
        if(V[mid/col][mid%col]<x){
            l=mid+1;
        }
        if(V[mid/col][mid%col]>x){
            h=mid-1;
        }
        mid=(l+h)/2;
    }
    return -1;
    
}
int main(){
    vector<vector<int> >V{
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int x;
    cin>>x;
    cout<<findPoint(V,x);
}
//binary search in mountain type
#include<iostream>
#include<vector>
using namespace std;
bool findDigit(vector<vector<int> >V,int x){
    int row=V.size();
    int col=V[0].size();
    int startRow=0;
    int startColoum=col-1;
    while(startRow<row&&startColoum>=0){
        int mid=V[startRow][startColoum];
        if(mid==x){
            return 1;
        }
        if(mid<x){
            startRow++;
        }
        if(mid>x){
            startColoum--;
        }
    }
    return 0;
}
int main(){
    vector<vector<int> >V{
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,23}
    };
    int x;
    cin>>x;
    cout<<findDigit(V,x);
}