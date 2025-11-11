#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,w,h,i,cnt=1;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>l>>w>>h;
        if(l<=20&&w<=20&&h<=20)
            cout<<"Case "<<cnt++<<": good"<<endl;
        else
            cout<<"Case "<<cnt++<<": bad"<<endl;
    }
    return 0;
}
