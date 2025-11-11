#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,n,a,arr[51],l;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(isdigit(s[i]))
        {
            arr[j++]=s[i]-'0';
        }
    }
    l=(n/2)+1;
    sort(arr,arr+l);
    for(i=0;i<l;i++)
    {
        cout<<arr[i];
        if(i<l-1)
            cout<<"+";
    }
    cout<<endl;
}
