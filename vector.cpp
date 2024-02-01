#include<iostream>
using namespace std;
#include<vector>
int main(){
   vector<int>V;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        V.push_back(element);
    }
    /*
    cout<<V.size()<<endl;
    V.resize(8);
    cout<<"\n"<<V.size();
    for(int i=0;i<8;i++){
        V.pop_back();
    }
    cout<<endl<<V.size()<<endl;*/
    for(int no:V){
        cout<<no<<endl;

    }
}