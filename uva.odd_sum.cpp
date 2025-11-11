#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int t,lb,ub,i,c=0,odd_sum;
    cin>>t;
    while(t--)
    {
        odd_sum=0;
        cin>>lb>>ub;
        if(lb%2==0)
            lb++;
        if(ub%2==0)
            ub--;
        for(i=lb;i<=ub;i+=2)
        {
            odd_sum+=i;
        }
        printf("Case %d: %d\n",++c,odd_sum);
    }
    return 0;
}
