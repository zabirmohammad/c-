#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int i,max=-99999,rev,t,n=0;
    string s;
    vector<string> ans;
    cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++)
        {
            cin>>s>>rev;
            if(rev>max)
            {
                max=rev;
                ans.clear();
            }
            if(rev==max)
                ans.push_back(s);
        }
        cout<<"Case #"<<++n<<":\n";
        //for(vector<string>::iterator it=ans.begin();it!=ans.end();++it)
            //cout<<*it<<endl;
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<endl;
        ans.clear();
        max=-99999;
    }
}
