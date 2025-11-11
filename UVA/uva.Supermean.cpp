#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,n,i,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        while(n!=1)
        {
            for(i=0;i<n;i++)
            {
                arr[i]=(arr[i]+arr[i+1])/2;
            }
            n--;
        }
       printf("Case #%d: ",++c);
       cout<<setprecision(3)<<arr[0]<<endl;
    }
}
