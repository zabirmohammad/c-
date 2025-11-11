#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans,maxi=-99999;
    cin>>a>>b>>c;
    ans=a+b+c;
    ans=max(ans,a+(b*c));
    ans=max(ans,(a*b)+c);
    ans=max(ans,(a+b)*c);
    ans=max(ans,a*(b+c));
    ans=max(ans,a*b*c);

    cout<<ans<<endl;
}
