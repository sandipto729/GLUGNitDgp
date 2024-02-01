#include<iostream>
using namespace std;
#include<string.h>
#include<vector>
#include<set>
int main(){
    int n,p,q;
    cin>>n>>p>>q;
    set<int>ans;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int correct=i;
            int inCorrect=j;
            int unattempt=n-i-j;
           if(unattempt>=0){
                int score=correct*p+inCorrect*q;
                ans.insert(score);
            }
        }
    }
    auto itr=ans.begin();
    while(itr!=ans.end()){
        cout<<*itr<<" ";
        itr++;
    }
}