#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,n,m,k,i,j,l;
    double cost=0;
    char a,b,c;
    char s[100000];
    cin>>t;
    while(t--)
    {
        cin>>k;
        int arr[k];
        char e[k];
        for(i=0;i<k;i++)
        {
            //scanf("%*c%c%d",&e[i],&arr[i]);
            cin>>e[i]>>arr[i];
        }
        scanf("%d ",&m);
        scanf("%c",&c);
        while(m--)
        {
            gets(s);
            for(i=0;i<k;i++)
            {
                for(j=0;j<strlen(s);j++)
                {
                    if(s[j]==e[i])
                    {
                        cost+=arr[i];
                    }
                }
            }
        }
        for(i=0;i<k;i++){
            if(c==e[i])
                cost+=arr[i];
        }
        cost/=100;
        printf("%0.2lf$\n",cost);
        cost=0;
    }
}
