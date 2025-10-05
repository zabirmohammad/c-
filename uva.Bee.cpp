#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    long long total[50],men[50];
    int i,n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        men[0]=0;
        men[1]=1;
        total[0]=1;
        total[1]=2;
        for(i=2;i<=45;i++)
        {
            men[i]=men[i-1]+men[i-2]+1;
            total[i]=total[i-1]+total[i-2]+1;
        }
        cout<<men[n]<<" "<<total[n]<<endl;
    }
}
