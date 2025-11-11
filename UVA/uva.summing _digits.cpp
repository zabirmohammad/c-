#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit,i,sum=0;
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        while(n>9)
        {
            sum=0;
            while(n>0)
            {
                digit=n%10;
                n/=10;
                sum+=digit;
            }
            n=sum;
        }
        cout<<n<<endl;
    }
    return 0;
}
