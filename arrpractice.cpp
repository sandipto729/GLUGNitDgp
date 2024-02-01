// Duplicate value in two increasing array
/*#include<iostream>
#include<vector>
using namespace std;
void duplicate(int *arr1,int *arr2,int n,int m,vector<int>&ans){
    int i=0,j=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i]>arr2[j]){
            j++;
        }
    }
}
int main(){
    int A[]={1,2,2,3,4},B[]={2,2,3,3};
    vector<int>ans;
    int n=5,m=4;
    duplicate(A,B,n,m,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}
*/
// FIND PAIR WHOSE SUM EQUAL TO THE THE GIVEN NUMBER
/*#include<iostream>
#include<vector>
using namespace std;
void pairSum(int *A,int n,int x,vector<vector<int> > &ans){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==x){
               vector<int>temp;
               temp.push_back(min(A[i],A[j]));
                temp.push_back(max(A[i],A[j]));
                ans.push_back(temp);
            }
        }
       }
       sort(ans.begin(),ans.end());
}
int main(){
    int A[]={2,-3,3,3,-2},x=0;
    int n=sizeof(A)/sizeof(A[0]);
    vector<vector<int> > ans;
    pairSum(A,n,x,ans);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}*/
// occurance of 1st and last position
/*#include<iostream>
using namespace std;
int firstOccurance(int *A,int n,int x){
    int l=0,h=n-1,mid,ans=-1;
    while(l<=h){
       mid=(l+h)/2;
       if(A[mid]==x){
           ans=mid;
           h=mid-1;
       }
       if(A[mid]>x){
           h=mid-1;
       }
       if(A[mid]<x){
           l=mid+1;
       }
    }
    return ans;
}

int lastOccurance(int *A,int n,int x){
    int l=0,h=n-1,mid,ans=-1;
    while(l<=h){
       mid=(l+h)/2;
       if(A[mid]==x){
           ans=mid;
           l=mid+1;
       }
       if(A[mid]>x){
           h=mid-1;
       }
       if(A[mid]<x){
           l=mid+1;
       }
    }
    return ans;
}


int main(){
    int A[]={1,4,5,5,5,9},x;
    int n=sizeof(A)/sizeof(A[0]);
    cin>>x;
    cout<<"First Occurance : "<<firstOccurance(A,n,x)<<"\n";
    cout<<"Last Occurance : "<<lastOccurance(A,n,x)<<"\n";
    
}*/
// pivot point in array
/*#include<iostream>
using namespace std;
int pivot(int *A,int n){
    int l=0,h=n-1,mid;
    mid=(l+h)/2;
    while(l<h){
       
        if(A[mid]>A[0]){
          l=mid+1;  
        }
        else{
            h=mid;
        }
        mid=(l+h)/2;
    }
    return l;
}
int main(){
    int A[]={5,7,9,1,2,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<pivot(A,n);
}*/
//find a number in mountain type array
/*
#include<iostream>
using namespace std;
int
position (int *A, int n, int x)
{
  int l = 0, h = n - 1, mid;
  mid = (l + h) / 2;
  int pivot = 2;
  while (l < h)
  
    {
      if (A[0] < x)
	{
	  h = pivot - 1;
	  	mid=(l+h)/2;
	  if (A[mid] > x)
	    {
	      l = mid + 1;
	    }
	  else if (A[mid] < x)
	    {
	      h = mid - 1;
	    }
	  else if (A[mid] == x)
	    {
	      return mid;
	    }
	    
	}

      if (A[0] > x)
	{
	  l = pivot;
	  	mid=(l+h)/2;
	  if (A[mid] > x)
	    {
	      l = mid + 1;
	    }
	  else if (A[mid] < x)
	    {
	      h = mid - 1;
	    }
	  else if (A[mid] == x)
	    {
	      return mid;
	    }
	    
	}

    }
  return -1;

}

int
main ()
{
  int A[] = { 7, 9, 1, 2, 3 };
  int x = 2;
  cout << position (A, 5, 2);
}
*/

