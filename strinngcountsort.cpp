#include<iostream>
using namespace std;
#include<string>
void countSort(string str){
    int n=str.size();
    //find max element
    int maxEle=str[0];
    for(int i=0;i<n;i++){
        if(str[i]>maxEle){
            maxEle=str[i];
        }
    }
    //defined a frequency array
    int fre[(maxEle+1)-97];
    for(int i=0;i<maxEle+1-97;i++){
        fre[i]=0;
    }
   for(int i=0;i<n;i++){
       fre[int(str[i])-97]++;
   }
   
   //revised frequency array
   for(int i=1;i<=maxEle-97;i++){
       fre[i]+=fre[i-1];
   }
   
   //ans array
   string ans;
   for(int i=n-1;i>=0;i--){
       ans[--fre[str[i]-97]]=str[i];
   }
  for(int i=0;i<n;i++){
      cout<<ans[i];
  }
  cout<<endl;
}
int main(){
    string str="collegewallah";
   countSort(str);
   cout<<str;
    
}