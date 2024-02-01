/*#include <iostream>
using namespace std;

int main() {
    string str = "SanDIPto Roy";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Convert uppercase to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Convert lowercase to uppercase
        }
    }
    cout << str;
}
*//*
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str="San Di Pto Roy";
    int countV=0,countW=0;
    for(int i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]);
    }
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            countV++;
        }
        if(str[i]>='a'&&str[i]<='z'){
            countW++;
        }
    }
    cout<<"Vowel : "<<countV<<" Consonant : "<<countW-countV<<" Word : "<<countW;

}   */
#include<iostream>
using namespace std;
int main(){
    string str1="MADAM";
    int l=0,h=str1.size()-1;
    while(l<=h){
        if(str1[l]!=str1[h]){
            cout<<"Not pallindrome";
            return 0;
        }
    }
    cout<<"Pallindrome";
}