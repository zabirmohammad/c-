#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long n,a,l,count=1,c=0;
    while(cin>>a>>l)
    {
        if(a<0&&l<0)
            break;
        n=a;
        while(a!=1)
        {
            if(a%2==1)
                a=(3*a)+1;
            else
                a/=2;

            if(a>l)
                break;
            count++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++c,n,l,count);
        count=1;
    }
}
