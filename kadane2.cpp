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
int start=0,end=0,s=0;
for(i=0;i<n;i++)
{
sum+=arr[i];

if(max<sum)
  {max=sum;
  start=s;
  end=i;
  }
else if(sum<0)
   {
    sum=0;
    s=i+1;
   }
}

printf("Max sum=%d",max);
printf("Stsrt :%d",start);
printf("End :%d",end);
return 0;

}
