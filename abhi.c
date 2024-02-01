#include <stdio.h>
int main() {
int a;
printf("Math Marks : \n ");
scanf("%d", &a);
int b;
printf("Physics Marks : \n ");
scanf("%d", &b );
int c;
printf("Chemistry Marks : \n ");
scanf("%d", &c);
int d;
printf("English Marks :\n ");
scanf("%d", &d);
int e;
printf("Painting Marks : \n ");
scanf("%d", &e);
int sum;
sum = a+b+c+d+e;
printf("Total Marks IS : %d , ",sum);
float percentage=sum/5;
printf("Percentage : %f",percentage);
if(sum>450&& sum<=500) {
printf("A Grade \n");
}
else if(sum>400 && sum<=450) {
printf("B Grade \n ");
}
else if(sum>350 && sum<=400) {
printf("C Grade \n ");
}
else if(sum>300 && sum<=350) {
printf("D Grade ");
}
else {
printf("Fail");
}
printf("Thanks You For Checking Result From Here \n");
}