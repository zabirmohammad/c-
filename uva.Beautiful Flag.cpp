#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    double r,x1,x2,y,l,w;
    int c=1,t;
    cin>>t;
    while(t--)
    {
        cin>>r;
        l=5*r;
        w=3*r;
        x1=l*(45.00/100.00);
        x2=l*(55.00/100.00);
        y=w/2;
        printf("Case %d:\n",c++);
        cout<<-x1<<" "<<y<<endl<<x2<<" "<<y<<endl;
        cout<<x2<<" "<<-y<<endl<<-x1<<" "<<-y<<endl;

    }
}
