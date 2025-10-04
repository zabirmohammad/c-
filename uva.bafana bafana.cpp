#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int t,n,k,p,pos,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        pos=(k+p)%n;
        cout<<"Case "<<++c<<": ";
        if(pos==0)
            cout<<n<<endl;
        else
            cout<<pos<<endl;
    }
}
