#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j=0,sum,heights[100],height,extra,moves;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>heights[i];
            sum+=heights[i];
        }
        height=sum/n;
        moves=0;
        for(i=0;i<n;i++)
        {
            if(heights[i]>height)
            {
                extra=heights[i]-height;
                moves+=extra;
            }
        }
        cout<<"Set #"<<++j<<endl;
        printf("The minimum number of moves is %d.\n",moves);
        cout<<endl;
    }
    return 0;
}
