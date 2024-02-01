#include<stdio.h>
int main(){
     printf("Radius of the circle is : ");
    float r;
   
    scanf("%f",&r);
    float c,a;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("Circumference : ");
    printf("%f",c);
    printf("\n Area : ");
    printf("%f",a);
}