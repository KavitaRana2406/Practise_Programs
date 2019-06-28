#include<iostream>

using namespace std;

int main()
{
    int n,a[100000],b[100000];
    cin>>n;
    int k=1;
    float zn[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<n;j++)
    {
     while(5^k<=a[j])
     {
         zn[j]+=a[j]/(5^k);
         k++;
     }
     b[j]=zn[j];
    }

    for(int k=0;k<n;k++)
    {
        cout<<b[k]<<endl;
    }
    return 0;
}
