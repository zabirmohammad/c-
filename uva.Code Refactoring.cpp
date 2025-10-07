#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0,k,i,j,a,b,c,d,count=0,c_temp,d_temp;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>k;
        for(i=2;i<k;i++)
        {
            if(k%i==0)
            {
                if(count==0)
                {
                    a=i;
                    b=k/i;
                    if(a==b)
                        continue;
                    count++;
                }
                else
                {
                    c=i;
                    d=k/i;
                    if(c==d)
                        continue;
                    break;
                }
            }
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n",++n,k,a,b,c,d);
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        count=0;
    }
}
