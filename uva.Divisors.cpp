#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long u,l,i,j,max,high;
    int t,count=0;
    cin>>t;
    while(t--)
    {
        cin>>l>>u;
        max=-99999;
        count=0;
        for(i=l;i<=u;i++)
        {
            count=0;
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0){
                    if(i/j==j)
                        count++;
                    else
                        count+=2;
                }
            }

            if(count>max)
            {
                max=count;
                high=i;
            }
        }
       printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,high,max);
    }

}
