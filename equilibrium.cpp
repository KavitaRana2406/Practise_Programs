#include<stdio.h>

int equi(int a[],int size)
{
int i;
int sum=0,lsum=0;
for(i=0;i<size;i++)
    sum+=a[i];
for(i=0;i<size;i++)
{
sum-=a[i];
if(lsum==sum)
   return i+1;

lsum=lsum+a[i];

}
return -1;
}

int main()
{
int a[100],n,i;
printf("Enter the size of the array :");
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);

int p=equi(a,n);
if(p==-1)
{printf("sorry");}
else{printf("%d",p);}

return 0;

}
