#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,j,d,m,y,qy,c=0,count=0;
    cin>>n;
    while(n--)
    {
        cin>>d>>m>>y>>qy;
        if(m==2&&d==29)
        {
           i=y+4;
           while(i<=qy)
            {
                if(i%400==0||i%100!=0&&i%4==0){
                    count++;
                }
                i+=4;
            }
             printf("Case %d: %d\n",++c,count);
        }
        else
            printf("Case %d: %d\n",++c,qy-y);
        count=0;
    }
}
