#include<stdio.h>
int binary_Search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=start + (end-start)/2;

        if(arr[mid]==key){
            return mid;
        }
        if (arr[mid]>key)
        {
            end = mid-1;
           
        }
        else{
          start=mid+1;
        }
}
return -1;
}
int main(){
    int n;
    printf("Enter no of elements which you want in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements in sorted order : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the element you are Searching for: ");
    scanf("%d",&key);
    int result=binary_Search(arr,n,key);
    if (result==-1)
         printf("Element is not Present in the Array.");
    else
         printf("Elements is at index= %d",result);
    
  return 0;  
}