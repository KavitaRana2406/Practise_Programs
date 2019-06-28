#include<stdio.h>
int main()
{
int arr[100],n;

printf("\nEnter the size of the array=");
scanf("%d",&n);

for(int k=0;k<n;k++)
   scanf("%d",&arr[k]);

int max=0;
int sum=0;
int i,j;
for(i=0;i<n;i++)
{
sum+=arr[i];

if(max<sum)
  max=sum;
else if(sum<0)
    sum=0;

}

printf("Max sum=%d",max);
return 0;

}
