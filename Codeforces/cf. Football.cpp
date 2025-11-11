#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count1=0,count2=0;
    cin>>n;
    string arr[n],first,second;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    first=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=first)
            second=arr[i];
        if(arr[i]==first)
            count1++;
        else
            count2++;
    }
    if(count1>count2)
        cout<<first<<endl;
    else
        cout<<second<<endl;

}
