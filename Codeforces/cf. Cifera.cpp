#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,l,i,n;
    bool cifera=false;
    cin>>k>>l;
    for(i=1;pow(k,i)<=l;i++)
    {
        if(pow(k,i)==l)
        {
            cout<<"YES"<<endl<<i-1<<endl;
            cifera=true;
            return 0;
        }
    }
    if(cifera==false)
        cout<<"NO"<<endl;
}
