#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,d,i;
    cin>>k>>d;
    if(d>0)
    {
        cout<<d;
        for(i=1;i<k;i++)
            cout<<"0";
        cout<<endl;
    }
    else
    {
        if(k==1)
            cout<<"0"<<endl;
        else
            cout<<"No solution"<<endl;
    }
}
