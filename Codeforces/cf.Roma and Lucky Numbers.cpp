#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,count=0,lucky;
    string s;
    cin>>n>>k;
    while(n--)
    {
        cin>>s;
        lucky=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='4'||s[i]=='7')
                lucky++;
        }
        if(lucky<=k)
            count++;
    }
    cout<<count<<endl;
}
