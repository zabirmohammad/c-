#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i,j,count,ptr;
    while(cin>>n)
    {
        int arr [n];
        for(i=0;i<n;i++)
            cin>>arr[i];

        count=0;
        for(i=0;i<n;i++)
        {
            ptr=n-1-i;
            for(j=0;j<ptr;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    count++;
                }

            }
             ptr--;
        }

        cout<<"Minimum exchange operations : "<<count<<endl;
    }
}
