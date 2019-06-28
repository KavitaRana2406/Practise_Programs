
#include<stdio.h>


void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    printf("Following activities are selected \n");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {

      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}

int main()
{
    int s[100],f[100],n;
    printf("\nEnter the no. of activities = ");
    scanf("%d",&n);
    printf("Enter start time :\n\n");
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    printf("\n\n");
    printf("Enter finish time :\n\n");
    for(int j=0;j<n;j++)
        scanf("%d",&f[j]);
    printf("\n\n");
    printMaxActivities(s, f, n);
    return 0;

}
