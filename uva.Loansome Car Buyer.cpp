#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    double loan,downpay,dep[100],cost,prize,mnthpay;
    int months,n,cng_dep[100];
    int i,j,k;
    while(cin>>months>>downpay>>loan>>n)
    {
        if(months<0)
            break;
        for(i=0;i<n;i++)
            cin>>cng_dep[i]>>dep[i];
        mnthpay=loan/months;
        cost=loan+downpay;
        prize=cost;
        j=0,k=-1;

        for(i=0;i<=months;i++)
        {
            if(i>0)
                loan-=mnthpay;
            if(cng_dep[j]==i){
                k++;j++;
                }
            prize-=(prize*dep[k]);

            if(prize>loan)
            {
                if(i==1)
                    cout<<i<<" month"<<endl;
                else
                    cout<<i<<" months"<<endl;
                break;
            }
        }
    }
}
