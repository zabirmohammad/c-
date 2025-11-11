#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=0,count=0,digit=0,sum=0;
    bool lucky=true;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='7'&&s[i]!='4')
            lucky=false;
    }
    for(i=s.size()-1;i>=0;i--)
    {
        digit=s[i]-'0';
        cout<<digit<<endl;
        sum=0;
        sum=pow(10,count)*digit;
        cout<<sum<<endl;
        n+=sum;
        cout<<n<<endl;
        count++;
    }
    if(n%4==0||n%7==0)
        cout<<"YES"<<endl;
    else if(lucky==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
