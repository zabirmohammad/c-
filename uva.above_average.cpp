#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,sum=0;
    float ans,average,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        average=sum/n;
        for(i=0;i<n;i++)
        {
            if(arr[i]>average)
                count++;
        }
        ans=(count*100)/n;
        printf("%0.3f%%\n",ans);
      sum=0;count=0;
    }
}
