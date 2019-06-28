#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*start,*newptr,*save,*ptr,*rear;

node* create(int n)
{
struct node *ptr=(node*)malloc(sizeof(node*));
ptr->data=n;
ptr->next=ptr;
return ptr;
}
void insert(node *np)
{
if(start==NULL)
start=rear=np;
else
{
np->next=rear->next;
rear->next=np;
}
}
void display(node *np)
{
while(np!=NULL)
{
printf("%d ",np->data);
np=np->next;
}
}

int main()
{
start=rear=NULL;
int info;
char ch='y';
while(ch=='y'|| ch=='Y')
{
printf("\nEnter = ");
scanf("%d",&info) ;
newptr=create(info);
insert(newptr);
printf("\nWanna continue ?")  ;
scanf("%c",&ch);
}
printf("\nList is...");
display(start);
return 0;
getch();
}

