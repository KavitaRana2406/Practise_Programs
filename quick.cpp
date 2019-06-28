#include<stdio.h>
#include<conio.h>

int partition(int arr[],int first,int last)
{
int q=arr[last];
int i=first-1;
int j;

for(j=first;j<last;j++)
{
   if(arr[j]<=q)
     {
      i++;
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
     }
}

int temp1=arr[i+1];
arr[i+1]=arr[last];
arr[last]=temp1;

return (i+1);
}


void quicksort(int arr[],int first,int last)
{
    if(first<last)
      {
       int p=partition(arr,first,last);
       quicksort(arr,first,p-1);
       quicksort(arr,p+1,last);
      }
}


int main()
{
int arr[100],n,i;
printf("\nEnter the size of the array :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
quicksort(arr,0,n-1);
printf("\n\n");
printf("Sorted Array is : \n");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
getch();
}
