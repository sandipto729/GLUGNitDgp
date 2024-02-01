#include <iostream>
using namespace std;

int minEle(int A[], int l, int h, int n) {
   while(l<=h){

    int mid = (l + h) / 2;

    if (A[mid] < A[mid + 1] && A[mid] < A[mid - 1]) {
        return A[mid];
    }

    if (A[mid] < A[0]) {
       h=mid-1;
    }  
    if (A[mid] > A[0]) {
        l=mid + 1;
    }
    
}
return -1;
}
int main() {
    int A[] = {5, 7, 8, 10, 1, 3, 4};
    int n = sizeof(A) / sizeof(A[0]);
    int minElement = minEle(A, 0, n-1 , n);

    cout << "Minimum element is: " << minElement << endl;

    return 0;
}
