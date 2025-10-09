#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    long long n,sum=0;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=floor((sqrt(8*n+1)-1)/2);

        cout<<sum<<endl;

    }
}
