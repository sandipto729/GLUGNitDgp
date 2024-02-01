
//1.Write a C program to display “GoodMorning!” on the screen.


#include<stdio.h>
int main(){
    printf("Good Morning");
}

// 2.Write a C program to demonstrate examples of escape sequences.

#include<stdio.h>
int main(){
    printf("\"Hello \n World");  //this is my first code
    printf("\n");
    printf("Hello \t World");
    printf("\n");
    printf("Hello \a World");
    printf("\n");
    printf("Hello \f World");
    printf("\n");
    printf("Hello World \?");
    printf("\n");
    printf("Hello \r World");



}

//3.Write a C program that calculates and displays the area of a rectangle.
#include<stdio.h>
int main(){
    int length,width;
    printf("Length : ");
    scanf("%d",&length);
    printf("Width : ");
    scanf("%d",&width);
    int area=length*width;
    printf("Area : %d",area);
    

}

//4.Write a C program that inputs three numbers and calculates their average.
#include<stdio.h>
int main(){
    int A[3];
    printf("Enter three number : ");
    for(int i=0;i<3;i++){
        scanf("%d",&A[i]);
    }
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=A[i];
    }
    float ave=sum/3.0;

    printf("Average : %f",ave);


}

//5.Write a C program that takes a character as input and displays its ASCII value.

#include<stdio.h>
int main(){
    char letter='a';
    char letter2='A';
    printf("%d",letter);
    printf("\n");
    printf("%d",letter2);
}

//6.Write a C program to swap the values of two variables

#include<stdio.h>
int main(){
    int a,b;
    a=90;
    b=100;
    int c;
    c=a;
    a=b;
    b=c;
    printf("a: %d",a);
    printf("\n");
    printf("b: %d",b);

}

//7.Write a C program that checks whether a given year is a leap year or not.

#include<stdio.h>
int main(){
    printf("Enter Year : ");
    int year;
    scanf("%d",&year);
    if(year%4==0&&(year%400==0||year%100!=0)){
        printf("Leap Year");
    }
    else{printf("Not leap Year");}
}

//8.Write a C program to convert temperatures between Celsius and Fahrenheit.
#include<stdio.h>
int main(){
    printf("Enter Celcius : ");
    int celcius;
    scanf("%d",&celcius);
    float fer=9*(celcius/5)+32;
    printf("Farenhite : %f",fer);

}


/*#include <stdio.h>
int main()
{
    int a;
    printf("\n enter the integer");
    scanf("%d",&a);
    if(a%3==0){
        printf("\n the number is divisible by 3");
        if (a%9==0){
            printf("\n the number is also divisble 9");
        }
    }
    else{printf("\n the number is not valid");}
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
  int n;
  cout<<"Enter Number :";
  cin>>n;
  int r,count=0;
  while(n>0){
    r=n%10;
    n=n/10;
    V.push_back(r);
    count++;
  }
  int product=pow(10,count-1);
  reverse(V. begin(),V. end());
  for(int i=0;i<V.size();i++){
    cout<<V[i]*product;
    product/=10;
    cout<<endl;
  }
  
}




#include<iostream>
using namespace std;
int max_Index(int A[],int size){
    int max=A[0],index=0;
for(int i=0;i<3;i++){
        if(A[i]>max){
            max=A[i];
            index=i;
        }
    }
    return index;
}
int max(int A[],int size){
    int max=A[0],index=0;
for(int i=0;i<3;i++){
        if(A[i]>max){
            max=A[i];
            index=i;
        }
    }
    return max;
}

int main(){
    int A[3];
    cout<<"Enter three digit : ";
    for(int i=0;i<3;i++){
        cin>>A[i];
    }
   int maxIndex=max_Index(A,3);
   A[maxIndex]=INT_MIN;
    
   if((A[0]<A[1]&&A[1]<A[2])||(A[0]>A[1]&&A[1]>A[2])){
        cout<<A[1];
    }
    else if((A[1]<A[0]&&A[0]<A[2])||(A[1]>A[0]&&A[0]>A[2])){
        cout<<A[0];
    }
    else if((A[1]<A[2]&&A[2]<A[0])||(A[1]>A[2]&&A[2]>A[0])){
        cout<<A[2];
    }
    cout<<"Median of the no is : "<<max(A,3);
    
    
    
}


#include<iostream>
using namespace std;
#include<vector>



void sortedSquares(vector<int>& a) {
int n = a.size(), i = 0, j = n-1;
vector<int> ans;
while(i <= j) {
if(abs(a[i]) < abs(a[j])) {

ans.push_back(a[j] *a[j]);
j--;
} 
else {

ans.push_back(a[i] *a[i]);
i++;


}
}
for(int i=0;i<a.size();i++){
    cout<<ans[i]<<" ";
}
return;
}
int main(){
vector<int>V;

    V.push_back(-10);
    V.push_back(-5);
    V.push_back(2);
    V.push_back(6);
    V.push_back(7);



sortedSquares(V);


}

#include<iostream>
using namespace std;
#include<vector>
int find_unique(int nums[], int n,int x){
int count=0;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(nums[i]+nums[j]==x){
count+=1;}
}
}
return count;}
int main(){
    int n;
    cin>>n;
    
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];

    }
    int x;
    cin>>x;
    cout<<find_unique(A,n,x);
}*/


/*#include<iostream>
using namespace std;
 
void mergeArrays(int arr1[], int arr2[],int size1,int size2)
{
    
     int j=0;
     int arr3[size1+size2];
   for(int i=0;i<size1;i++){
       arr3[j++]=arr1[i];
   }
   for(int i=0;i<size2;i++){
       arr3[j++]=arr2[i];
   }
   sort(arr3,arr3+size1+size2);
   for(int i=0;i<size1+size2;i++){
       cout<<arr3[i]<<" ";
}
 
}

int main()
{
    int arr1[] = {1, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    int arr3[n1+n2];
    mergeArrays(arr1, arr2,n1,n2);
 
   
    
 
    return 0;
}




*/


/*
// C++ program to merge two sorted arrays/
#include<iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1,
							int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;
	// traverse the arr1 and insert its element in arr3
	while(i < n1){
	arr3[k++] = arr1[i++];
	}
	
	// now traverse arr2 and insert in arr3
	while(j < n2){
	arr3[k++] = arr2[j++];
	}
	
	// sort the whole array arr3
	sort(arr3, arr3+n1+n2);
}

// Driver code
int main()
{
	int arr1[] = {1, 3, 5, 7};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {2, 4, 6, 8};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	int arr3[n1+n2];
	mergeArrays(arr1, arr2, n1, n2, arr3);

	cout << "Array after merging" <<endl;
	for (int i=0; i < n1+n2; i++)
		cout << arr3[i] << " ";

	return 0;
}
*/


/*#include<iostream>
using namespace std;
#include<vector>
void square(int arr[],int size){
   int ans[size];
   int j=0;
    for(int i=0;i<size;i++){
        ans[j++]=arr[i]*arr[i];
    }
    sort(ans,ans+size);
int z;
cout<<"Which oreder do you want to see : "<<endl<<"1 . Increasing"<<endl<<"2.Decreasing"<<endl;

cin>>z;
   

    vector<int>V;
    for(int i=0;i<size;i++){
        V.push_back(ans[i]);
    }
    reverse(V.begin(),V.end());
    if(z==1){ for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }}
    else if(z==2){for(int i=0;i<size;i++){
        cout<<V[i]<<" ";
    }}

}
int main(){
    cout<<"Enter size : ";
    int n;
    cin>>n;
    cout<<"Enter element in array : "<<endl;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    square(array,n);
}
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    for(int i=0;i<V.size();i++){
        int ele;
        cin>>ele;
        V.push_back(ele);
    }
    sort(V.begin(),V.end());
     for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
     }
}

