#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long n;
    int arr[100],size,i;
    while(cin>>n&&n>=0)
    {
        size=0;
        if(n==0)
            cout<<"0"<<endl;
        else{
        while(n!=0)
        {
            arr[size++]=n%3;
            n/=3;
        }
        for(i=size-1;i>=0;i--)
            cout<<arr[i];
        cout<<endl;
        }
    }
}
