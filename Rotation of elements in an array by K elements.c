#include<stdio.h>
int main()
{
    int arr[]={10, 20, 30, 40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int temp[k];
    for(int i=0;i<k;i++)
    temp[i]=arr[i];
    int x=k;
    for(int i=0;x<n;i++)
    {
        arr[i]=arr[x++];
    }
    x=0;
    for(int i=n-k;i<n;i++)
    arr[i]=temp[x++];
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
}
