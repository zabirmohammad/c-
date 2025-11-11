#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count=0;
    string s;
    char s1[5]={'h','e','l','l','o'};
    cin>>s;
    n=s.size();
    for(i=0,j=0;i<n;i++)
    {
        if(s[i]==s1[j])
        {
            count++;j++;
        }
        if(j==5)
            break;
    }
    if(count==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
