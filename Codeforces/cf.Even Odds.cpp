#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,i,j,mid;
    double n;
    cin>>n>>k;
    mid=ceil(n/2);
    if(k<=mid)
        cout<<k+(k-1)<<endl;
    else
        cout<<k-mid+(k-mid)<<endl;
}
