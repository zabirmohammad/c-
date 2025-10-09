#include<bits/stdc++.h>
using namespace std;
int main()
{
    int balance,occasion=0,treat=0,arr,n,i,j=1,n1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
          break;

        treat=0;occasion=0;
        for(i=0;i<n;i++)
        {
            cin>>n1;
            if(n1==0)
                treat++;
            else
                occasion++;
        }

        balance=occasion-treat;
        printf("CASE %d: %d\n",j++,balance);
    }
    return 0;
}
