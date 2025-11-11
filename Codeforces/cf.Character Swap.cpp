#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum,i,j;
    char c,x;
    vector<char> v;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n>>s1>>s2;
        v.clear();
        for(i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                v.push_back(s1[i]);
                v.push_back(s2[i]);
            }
        }
        if(v.size()!=4)
            cout<<"No"<<endl;
        else
        {
            //sort(v.begin(),v.end());
            if(v[0]==v[2]&&v[1]==v[3])
                cout<<"Yes"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
}
