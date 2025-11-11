#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int i,j,n;
    cin>>s1>>s2;
    n=s1.size();
    bool ans=true;
    for(i=0;i<n;i++){
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]+=32;
        if(s2[i]>='A'&&s2[i]<='Z')
            s2[i]+=32;
    }
    for(i=0;i<n;i++)
    {
        if(s1[i]<s2[i])
        {
            ans=false;
            cout<<"-1"<<endl;
            break;
        }
        else if(s1[i]>s2[i])
        {
            ans=false;
            cout<<"1"<<endl;
            break;
        }
        else
            continue;
    }
    if(ans==true)
        cout<<"0"<<endl;
}
