#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,k;
    double i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        //i=double(a+b)/3;

        double ans=c*((2*a)-b)/(a+b);
        cout<<int(ans)<<endl;
    }
}
