#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> list1 = {1, 2, 3, 4, 5};

    auto itr1 = list1.begin();
    list1.insert(itr1, 4);

    auto itr2 = list1.begin();
    cout << *itr2;

    return 0;
}
