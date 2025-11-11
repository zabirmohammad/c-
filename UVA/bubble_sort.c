#include<stdio.h>

int main()
{
    int arr[100],n,i,p,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
       for(p=0;p<n-i-1;p++)
        {
            if(arr[p]>arr[p+1])
            {
                temp=arr[p];
                arr[p]=arr[p+1];
                arr[p+1]=temp;
            }
        }

    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
