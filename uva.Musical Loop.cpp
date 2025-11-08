#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i,j,count,up,down,max;
    while(cin>>n)
    {
        if(n==0)
            break;
        count=0;up=0;down=0;
        int arr[n+10];
        for(i=0;i<n;i++)
            cin>>arr[i];
        if(arr[0]<arr[1])
            up=1;
        else
            down=1;
        arr[n]=arr[0];
        arr[n+1]=arr[1];
        for(i=2;i<=n+1;i++)
        {

            if(up==1)
            {
                if(arr[i]>arr[i-1])
                    up=1;
                else
                {
                    up=0;
                    down=1;
                    count++;
                }
            }
            else if(down==1)
            {
                if(arr[i]<arr[i-1])
                    down=1;
                else
                {
                    down=0;
                    up=1;
                    count++;
                }
            }
        }


        cout<<count<<endl;
    }
}
