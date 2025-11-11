#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,count=0;
    string s;
    char ch;
    bool dangerous=true;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        ch=s[i];
        dangerous=false;
        count=0;
        for(j=i;j<i+7;j++)
        {
            if(s[j]==ch)
                count++;
        }
        if(count==7)
        {
            cout<<"YES"<<endl;
            dangerous=true;
            return 0;
        }

    }
    if(dangerous==false)
        cout<<"NO"<<endl;
}
