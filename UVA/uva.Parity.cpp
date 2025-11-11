#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long n;
    int sum=0,i,j,bin[1020];
    while(cin>>n)
    {
        if(n==0)
            break;
        i=0;
        while(n!=0)
        {
            bin[i]=n%2;
            n/=2;
            sum+=bin[i];
            i++;
        }
        cout<<"The parity of ";
        for(j=i-1;j>=0;j--)
            cout<<bin[j];
        cout<<" is "<<sum<<" (mod 2)."<<endl;
        sum=0;
    }
}
