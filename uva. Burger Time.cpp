#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,j,k,mini=99999,count=0;
    string s;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>s;
        for( i=0;i<s.size();i++)
        {
            if(s[i]=='Z'){
                mini=0;
                break;
            }
            else if(s[i]=='R')
            {
                j=i;
                while(s[j]!='D'){
                    count++;
                    j++;
                }
                if(count<mini)
                    mini=count;
            }
            else if(s[i]=='D')
            {
                j=i;
                while(s[j]!='R'){
                    count++;
                    j++;
                }
                if(count<mini)
                    mini=count;
            }
            count=0;
        }
        cout<<mini<<endl;
        mini=99999;
    }
}
