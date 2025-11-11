#include<bits\stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int problem[12],contest[12],sum=0,t=0,i,j,n;
    while(scanf("%d",&n))
    {

        if(n<0)
            break;
        for(i=0;i<12;i++)
            cin>>problem[i];
        for(i=0;i<12;i++)
            cin>>contest[i];
        printf("Case %d:\n",++t);
        for(i=0;i<12;i++)
        {
            if(contest[i]<=n){
                cout<<"No problem! :D"<<endl;
                n-=contest[i];
            }
            else
                cout<<"No problem. :("<<endl;

            n+=problem[i];
        }

    }
    return 0;
}
