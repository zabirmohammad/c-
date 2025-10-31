#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n>=101)
            printf("f91(%d) = %d\n",n,n-10);
        else
            printf("f91(%d) = 91\n",n);
    }
}
