#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,arr[5],count=0,i,j;
    while(cin>>t)
    {
        for(i=0;i<5;i++){
            cin>>arr[i];
            if(arr[i]==t)
                count++;
        }
        cout<<count<<endl;
        count=0;
    }
}
