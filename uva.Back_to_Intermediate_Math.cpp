#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int t,n=0,width,v,u,p;
    double shortest,fastest;
    cin>>t;
    while(t--)
    {
        cin>>width>>v>>u;
        cout<<"Case "<<++n<<": ";
        if(u<=v||u==0||v==0)
        {
            cout<<"can't determine"<<endl;
            continue;
        }
        fastest=(double)width/u;
        shortest=(double)width/sqrt(u*u-v*v);
        printf("%0.3lf\n",shortest-fastest);

    }
}
