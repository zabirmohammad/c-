#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r;
    set<int> a;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>r;
        a.insert(r);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>r;
        a.insert(r);
    }

    if(a.size()==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    //set<int>::iterator i;
    //for(i=a.begin();i!=a.end();i++)
        //cout<<*i<<endl;

}
