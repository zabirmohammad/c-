#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[3];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        if(a[0]==0&&a[1]==0&&a[2]==0)
            break;
        sort(a,a+3);
        if((a[0]*a[0])+(a[1]*a[1])==(a[2]*a[2]))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}
