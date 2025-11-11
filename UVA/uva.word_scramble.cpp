#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i,j,count=-1;
    char s[1000],ans[1000];
    while(gets(s))
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]==' ')
            {
                for(j=i-1;j>count;j--)
                {
                    cout<<s[j];
                }
                cout<<" ";
                count=i;
            }
            if(i==strlen(s)-1)
            {
                for(j=i;j>count;j--)
                    cout<<s[j];
            }


        }
        cout<<endl;
        count=-1;
    }
}
