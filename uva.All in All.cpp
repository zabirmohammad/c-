#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int i,j,count=0;
    while(cin>>s)
    {
        cin>>t;
        i=0;j=0;
        while(i<s.size()&&j<t.size())
        {
            if(s[i]==t[j])
            {
               count++;
               i++;j++;
            }
            else
                j++;
        }
        if(count==s.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        count =0;
    }
}
