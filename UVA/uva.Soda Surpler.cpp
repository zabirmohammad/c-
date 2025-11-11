#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,e,f,c,n,total=0,ex=0;
    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;
        n=e+f;

        total=0;
        ex=0;
        while(n>=c)
        {
            ex=n%c;
            n/=c;
            total+=n;
            n+=ex;
        }

        cout<<total<<endl;


    }
}



