#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int i,j,n,m,count=0,grp_size;
    char s[100],ans[100];
    while(cin>>n)
    {
        if(n==0)
            break;

        scanf("%s",&s);
        grp_size=strlen(s)/n;
        for(i=0;i<strlen(s);i++)
        {
            count++;
            if(count%grp_size==0)
            {
                j=1;
                m=grp_size;
                while(m)
                {
                    ans[count-m]=s[count-j];
                    j++;
                    m--;
                }
            }
        }
        count=0;
        for(i=0;i<strlen(s);i++)
            cout<<ans[i];
        cout<<endl;
    }
}
