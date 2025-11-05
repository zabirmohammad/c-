#include<bits/stdc++.h>

using namespace std;
int main()
{
freopen("output.txt","w",stdout);
    char name1[100],name2 [100];
    int i,j,k,sum1,sum2,digit;
    double ans;
    while(gets(name1))
    {

        sum1=0;sum2=0;

        gets(name2);
        for(i=0;i<strlen(name1);i++)
        {
            if(name1[i]>='A'&&name1[i]<='Z')
            {
                sum1+=name1[i]-64;
            }
            else if(name1[i]>='a'&&name1[i]<='z')
            {
                sum1+=name1[i]-96;
            }
        }

        for(i=0;i<strlen(name2);i++)
        {
            if(name2[i]>='A'&&name2[i]<='Z')
            {
                sum2+=name2[i]-64;
            }
            else if(name2[i]>='a'&&name2[i]<='z')
            {
                sum2+=name2[i]-96;
            }
        }

        while(sum1>9)
        {
            j=0;
            while(sum1>0)
            {
                digit=sum1%10;
                sum1/=10;
                j+=digit;
            }
            sum1=j;
        }
        while(sum2>9)
        {
            k=0;
            while(sum2>0)
            {
                digit=sum2%10;
                sum2/=10;
                k+=digit;
            }
            sum2=k;
        }

        if(sum2>sum1)
            ans=((double)sum1*100)/(double)sum2;
        else
            ans=((double)sum2*100)/(double)sum1;

        printf("%0.2lf %%\n",ans);
    }
    return 0;
}
