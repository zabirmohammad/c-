#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    long int n,budget,nhotel,nweek,i,j,price,avbed[100],sum,cheap,l=0;
    while(scanf("%d %d %d %d",&n,&budget,&nhotel,&nweek)==4)
    {
        cheap=99999999;
        for(i=0; i<nhotel; i++)
        {
            cin>>price;
            for(j=0; j<nweek; j++)
            {
                cin>>avbed[j];
                sum=0;
                if(avbed[j]>=n)
                {
                    sum=price*n;
                    if(sum<cheap)
                        cheap=sum;
                }
             }
        }
        if(cheap<=budget)
            cout<<cheap<<endl;
        else
            cout<<"stay home"<<endl;
    }
    return 0;
}
