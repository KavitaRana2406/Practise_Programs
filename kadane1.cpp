#include<stdio.h>
int main()
{
int arr[100],n,x;

printf("\nEnter the size of the array=");
scanf("%d",&n);

for(int k=0;k<n;k++)
   scanf("%d",&arr[k]);

printf("Enter sum=");
scanf("%d",&x);
int max=0;
int sum=0;
int i,j;
for(i=0;i<n;i++)
{
sum+=arr[i];

if(sum>x)
  ;

}

printf("Max sum=%d",max);
return 0;

}
