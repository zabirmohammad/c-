#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int a,b,c,d,l,i,j,count=0;;
    long long ans=0;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        for(i=0;i<=l;i++)
        {
            ans=a*(i*i)+b*i+c;
            if(ans%d==0)
                count++;
        }
        cout<<count<<endl;
        count=0;
    }
}

