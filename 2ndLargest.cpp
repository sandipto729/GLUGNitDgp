#include<iostream>
using namespace std;
/*int largestArray(int A[],int size){
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(A[i]>max){
            max=A[i];
            maxindex=i;
            }
    }
    return maxindex;
}
    int largestArray2(int A[],int size){
    int max=INT_MIN;
    
    for(int i=0;i<size;i++){
        if(A[i]>max){
            max=A[i];
            
            }
    }
    return max;
}
int main(){
    int array[]={2,3,1,3,2,4,1};
    int largestIndex=largestArray(array,7);
    array[largestIndex]=-1;
    cout<<largestArray2(array,7);



}*/






/*
int main(){
    int A[7]={2,3,1,2,4,3,2};
    int max=-1,max2=A[0];
    for(int i=0;i<7;i++){
        if(A[i]>max){max=i;}
    }
    A[max]=-1;
    for(int i=0;i<7;i++){
        if(A[i]>max2){max2=A[i];}
    }
    cout<<max2;


}*/




//more than double max value present in array


/*#include<iostream>
using namespace std;
int LargeArray(int array[],int size){
    int max=array[0],maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){max=array[i],maxindex=i;}
    }
    return maxindex;
}

int LargeArray2(int array[],int size){
    int max=array[0],maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){max=array[i],maxindex=i;}
    }
    return max;
}


int main(){
    int A[8]={2,4,6,7,4,3,6,7};
    int Large=LargeArray(A,8);
    //A[Large]=-1; 
    int largestElement=A[Large];
    for(int i=0;i<8;i++){
        if(A[i]==largestElement){
            A[i]=-1;
            }
    }   
    cout<<LargeArray2(A,8)<<endl;
    for(int i=0;i<8;i++){
        cout<<A[i]<<endl;
    }

}





#include<iostream>
using namespace std;
int main(){
    int A[]={3,2,1,4,5,3,6,7,5,6,1,7};
    int size=sizeof(A)/sizeof(A[0]);
    int max1=A[0],max2=A[0];
    for(int i=0;i<size;i++){
        if(max1<A[i]){max1=A[i];}
    }

    for(int i=0;i<size;i++){
        if(max2<A[i]&&A[i]!=max1){max2=A[i];}
    }
    cout<<max2;

}
*/