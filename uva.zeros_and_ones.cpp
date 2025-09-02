#include<bits/stdc++.h>

using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i,j,temp,count=0,t=0;

    char s[1000005];
    while(scanf("%s",&s)==1)
    {
        cin>>n;
        printf("Case %d:\n",++t);
        while(n--)
        {
            cin>>i>>j;
            count=1;
            if(i>j)
            {
                temp=i;
                i=j;
                j=temp;
            }

            for(int k=i;k<j;k++)
            {
                if(s[k]!=s[k+1]){
                    count=0;

                    break;

                }

            }

            if(count==1)
                cout<<"Yes"<<endl;
            else
               cout<<"No"<<endl;

        }

    }
    return 0;
}
