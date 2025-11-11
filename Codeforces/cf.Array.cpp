#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,x;
    vector<int> first,second,third;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            first.push_back(arr[i]);
        else if(arr[i]>0)
            second.push_back(arr[i]);
        else
            third.push_back(arr[i]);
    }
    if(second.size()==0)
    {
        second.push_back(first.back());
        first.pop_back();
        second.push_back(first.back());
        first.pop_back();
    }
    if(first.size()%2==0)
    {
        m=first.size()-1;
        while(m--)
        {
            third.push_back(first.back());
            first.pop_back();
        }
    }
    cout<<first.size()<<" ";
    for(i=0;i<first.size();i++)
        cout<<first[i]<<" ";
    cout<<endl<<second.size()<<" ";
    for(i=0;i<second.size();i++)
        cout<<second[i]<<" ";
    cout<<endl<<third.size()<<" ";
    for(i=0;i<third.size();i++)
        cout<<third[i]<<" ";
    cout<<endl;
}
