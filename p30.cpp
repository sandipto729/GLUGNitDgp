/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>V;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        V.push_back(ele);

    }
    int x,left=0,right=n-1;
    cin>>x;
    while(left<=right){
        if(V[left]==x){
            cout<<left+1;
            break;
            }

            if(V[right]==x){
            cout<<right+1;
            break;
            }
            left++;
            right--;

    }
}
*/
#include<iostream>
using namespace std;
void index(string s,char x,int*p,int*q){
    for(int i=0;i<s.size();i++){
        if(s[i]==x){
            *p=i+1;
            break;
        }
        }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==x){
            *q=i+1;
            break;
        }
        }

}
int main(){
    string s="abacdae";
    char a='a';
    int f,l,*p=&f,*q=&l;
    index(s,a,p,q);
    cout<<f<<"  "<<l;
    


}
