#include<iostream>
using namespace std;
#include<list>
#include<vector>
class hashing{
    public:
    vector<list<int>>hashtable;
    int bucket;
    hashing(int size){
        bucket=size;
        hashtable.resize(size);
    }
    int hashvalue(int key){
        return key%bucket;
    }
    void add(int val){
        int idx=hashvalue(val);
        hashtable[idx].push_back(val);
    }
    bool search(int val){
        int idx=hashvalue(val);
        for(auto i=hashtable[idx].begin();i!=hashtable[idx].end();i++){
            if(*i == val)return true;
        }
        return false;
    }
    void deleteKey(int val){
        int idx=hashvalue(val);
        hashtable[idx].remove(val);
    }
};
int main(){
    hashing h(10);
    h.add(456);
    h.add(426);
    h.add(459);
    h.add(329);
    h.add(128);
    h.add(120);
    h.add(211);
    cout<<h.search(329)<<endl;
   h.deleteKey(329);
    cout<<h.search(329)<<endl;
    
}