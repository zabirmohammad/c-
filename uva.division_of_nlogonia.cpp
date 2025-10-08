#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,x1,y1;
    while(scanf("%d",&t)==1)
    {
        if(t==0)break;
        cin>>x>>y;
        for(int i=0;i<t;i++)
        {
            cin>>x1>>y1;
            if(x1>x&&y1>y)
                cout<<"NE"<<endl;
            else if(x1<x&&y1>y)
                cout<<"NO"<<endl;
            else if(x1<x&&y1<y)
                cout<<"SO"<<endl;
            else if(x1>x&&y1<y)
                cout<<"SE"<<endl;
            else
                cout<<"divisa"<<endl;
        }

    }

    return 0;
}

