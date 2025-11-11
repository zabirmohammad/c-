#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,sum=0;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {

        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                sum+=i;
        }

        if(sum==n)
            printf("%05.d  PERFECT\n",n);
        else if(sum>n)
            printf("%5d  ABUNDANT\n",n);
        else
            printf("%5d  DEFICIENT\n",n);
        sum=0;
    }
}
