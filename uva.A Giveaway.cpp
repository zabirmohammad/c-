#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long int n,d1,d2,root3,root2;
    while(cin>>n)
    {
        if(n==0)
            break;
        d1=sqrt(n);
        d2=pow(n,0.333333334);
        if(d1*d1==n&&d2*d2*d2==n)
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;
    }
}
