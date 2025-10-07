#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,a,arr[500],count;
    while(cin>>n>>m>>k)
    {
        count=0;
        for(i=1; i<=n; i++)
            arr[i]=0;
        for(i=1; i<=n; i++){
            if(i%7==0||i%10==7)
                arr[i]++;
        }
        i=n;
        a=n+1;
        while(arr[m]!=k)
        {
            if(count==0)
            {
                i--;

                if(i==1)
                    count=1;
                if(a%7==0||a%10==7)
                {
                    arr[i]++;
                }
            }
            else if(count==1)
            {
                i++;

                if(i==n)
                    count=0;
                if(a%7==0||a%10==7)
                {
                    arr[i]++;
                }

            }

            a++;
        }
        cout<<--a<<endl;
    }
}
