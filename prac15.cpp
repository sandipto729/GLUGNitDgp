/*
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*pre,*next;
};
struct Node*deletebeginning(struct Node*head){
return head->next;
}
struct Node*deletelast(struct Node*head){
struct Node*temp=head;
while(temp->next->next)temp=temp->next;
temp->next=NULL;
return head;
}
struct Node*deleteith(struct Node*head,int pst){
struct Node*temp=head;// 1 2 3 4
int count=2;
while(temp&&count!=pst){
temp=temp->next;
count++;
}
struct Node*temp2=temp->next;
temp->next=temp->next->next;
temp->next->pre=temp;
free(temp2);
return head;
}
struct Node*deleteelement(struct Node*head,int pst){
struct Node*temp=head;// 1 2 3 4
int count=2;
while(temp&&temp->next->data!=pst){
temp=temp->next;
count++;
}
struct Node*temp2=temp->next;
temp->next=temp->next->next;
temp->next->pre=temp;
free(temp2);
return head;
}
void displayFirst(struct Node*head){
struct Node*temp=head;
while(temp!=NULL){
printf("%d -> ",temp->data);
temp=temp->next;
}
printf("NULL");
}
void displayLast(struct Node*head){
struct Node*temp=head;
while(temp->next!=NULL)temp=temp->next;
while(temp){
printf("%d -> ",temp->data);
temp=temp->pre;
}
printf("NULL");
}
int main(){

struct Node*p,*head=NULL,*temp;
int n;
printf("Enter length : ");
scanf("%d",&n);
printf("Enter element : ");
for(int i=0;i<n;i++){
p=(struct Node*)malloc(sizeof(struct Node));
scanf("%d",&p->data);
p->pre=NULL;
p->next=NULL;
if(!head)head=p;
else{
temp->next=p;
p->pre=temp;
}
temp=p;
}
printf("Enter as your choice \n b)display in forward order \n c)display in backward order \n d)delete element at beginning \n e)delete element at end \n f)delete element at i-th position \n g)delete specific element \n");
char ch;
printf("Enter your choice : ");
scanf("%c",&ch);scanf("%c",&ch);
if(ch=='b'){
printf("Display from first : ");
displayFirst(head);
printf("\n");
}
if(ch=='c'){
printf("Display from last : ");
displayLast(head);
printf("\n");
}
if(ch=='d'){
struct Node*head2=deletebeginning(head);
printf("Display from first after deleting 1st element : ");
displayFirst(head2);
printf("\n");
}
if(ch=='e'){
struct Node*head3=deletelast(head);
printf("Display from first after deleting last element : ");
displayFirst(head3);
printf("\n");
}
if(ch=='f'){
int xyz;
printf("Enter value : ");
scanf("%d",&xyz);
struct Node*head4=deleteith(head,xyz);
printf("Display from first after deleting i-th element : ");
displayFirst(head4);
printf("\n");
}
if(ch=='g'){
int xyz;
printf("Enter value : ");
scanf("%d",&xyz);
struct Node*head5=deleteelement(head,xyz);
printf("Display from first after deleting specific element : ");
displayFirst(head5);
printf("\n");
}
} 
*/
/*
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void displayFirst(struct Node *head) {
    struct Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
void displayLast(struct Node*head,struct Node*temp){
if(temp==head)return;
displayLast(head,temp->next);
printf("%d -> ",temp->data);
}
struct Node* deleteFirst(struct Node*head){
if(head->next==head)return NULL;
struct Node*temp=head;
while(temp->next!=head)temp=temp->next;
temp->next=head->next;
return temp->next;
}
struct Node* deletelast(struct Node*head){
if(head->next==head)return NULL;
struct Node*temp=head;
while(temp->next->next!=head)temp=temp->next;
temp->next=head;
return head;
}
struct Node*deleteith(struct Node*head,int pst){
struct Node*temp=head;// 1 2 3 4
int count=2;
while(count!=pst){
temp=temp->next;
count++;
}
struct Node*temp2=temp->next;
temp->next=temp->next->next;

free(temp2);
return head;
}
struct Node*deleteelement(struct Node*head,int pst){
struct Node*temp=head;// 1 2 3 4
int count=2;
while(temp->next->data!=pst){
temp=temp->next;
count++;
}
struct Node*temp2=temp->next;
temp->next=temp->next->next;

free(temp2);
return head;
}
int main() {
    struct Node *pre, *p, *head = NULL;
    int n;
    printf("Enter length of linkedlist : ");
    scanf("%d", &n);
    printf("Enter element ");
    for (int i = 0; i < n; i++) {
        p = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &p->data);
        p->next = NULL;

        if (!head)
            head = p;
        else {
            pre->next = p;
        }

        pre = p;
    }

    pre->next = head;
    
    printf("Enter as your choice \n b)display in forward order \n c)display in backward order \n d)delete element at beginning \n e)delete element at end \n f)delete element at i-th position \n g)delete specific element \n");
char ch;
printf("Enter your choice : ");
scanf("%c",&ch);scanf("%c",&ch);
if(ch=='b'){
printf("Display from first : ");
displayFirst(head);
printf("\n");
}
if(ch=='c'){
printf("Display from last : ");
displayLast(head,head->next);
printf("%d \n",head->data);
}
if(ch=='d'){
struct Node*head2=deleteFirst(head);
printf("Display from first after deleting 1st element : ");
displayFirst(head2);
printf("\n");
}
if(ch=='e'){
struct Node*head3=deletelast(head);
printf("Display from first after deleting last element : ");
displayFirst(head3);
printf("\n");
}
if(ch=='f'){
int xyz;
printf("Enter value : ");
scanf("%d",&xyz);
struct Node*head4=deleteith(head,xyz);
printf("Display from first after deleting i-th element : ");
displayFirst(head4);
printf("\n");
}
if(ch=='g'){
int xyz;
printf("Enter value : ");
scanf("%d",&xyz);
struct Node*head5=deleteelement(head,xyz);
printf("Display from first after deleting specific element : ");
displayFirst(head5);
printf("\n");
}
    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
int coefficient;
struct Node*next;
};
void display(struct Node*head){
struct Node*temp=head;
while(temp){
printf("%d X^ %d + ",temp->data,temp->coefficient);
temp=temp->next;
}
printf("0");
}
int main(){
struct Node*p,*head=NULL,*pre;
int n;
printf("Enter size : ");
scanf("%d",&n);
for(int i=0;i<n;i++){
p=(struct Node*)malloc(sizeof(struct Node));
printf("Enter data : ");
scanf("%d",&p->data);
printf("Enter coefficient : ");
scanf("%d",&p->coefficient);
p->next=NULL;
if(!head)head=p;
else{
pre->next=p;
}
pre=p;
}
printf("Display : ");
display(head);
}

*/
/*
#include <stdio.h>

#define N 10


int determinant(int mat[N][N], int n);


void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n);

int main() {
    int n; // Order of the matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    
  

    int mat[N][N]; 
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    
    int det = determinant(mat, n);
    printf("Determinant of the matrix is: %d\n", det);

    return 0;
}

// Recursive function to find the determinant 
int determinant(int mat[N][N], int n) {
    int det = 0; 

    if (n == 1)
        return mat[0][0];

    int temp[N][N]; 

    int sign = 1; 

   
    for (int f = 0; f < n; f++) {
        
        getCofactor(mat, temp, 0, f, n);
        det += sign * mat[0][f] * determinant(temp, n - 1);

       
        sign = -sign;
    }

    return det;
}


void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n) {
    int i = 0, j = 0;

   
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];

               
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    float coeff;
    int exp;
    struct node*next;
};
void traverse(struct node* head){
    while(head!=NULL){
        printf("%f-%d",head->coeff,head->exp);
        head=head->next;
    }
}
int main(){
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->coeff=45;
    head->exp=4;
    head->next=NULL;
    struct node* current=(struct node*)malloc(sizeof(struct node));
    head->next=current;
    current->coeff=12;
    current->exp=3;
    current->next=NULL;
    traverse(head);



}