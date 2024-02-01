#include<iostream>
using namespace std;
int main(void) {
    //Problem: Display a range for a table from n and n^2, for integers ranging from 1-10.

   int n, factorialnumber, i;

    
    int s;
    cin>>s;

   for (n = 1; n <= s; n++) {
        factorialnumber = factorialnumber * n;

        printf("\n %i = %i",n, factorialnumber );
   }
    return 0;
}