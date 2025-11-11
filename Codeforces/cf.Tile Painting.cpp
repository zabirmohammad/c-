#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long i,j,k,t,num,n;
    while(cin>>n){
    if(isprime(n))
        cout<<n<<endl;
    else
    {
        num=0;
        for(i=n/2+1;i>=0;i--)
        {
            if(n%i==0)
            {
                num=i;
                break;
            }
        }
        num+=(n-(2*num));
        cout<<num<<endl;
    }
    }

}
