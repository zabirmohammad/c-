#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("output.txt","w",stdout);
    int t,n,m,i,j,k;
    cin>>t;
    int arr[10];

    while(t--)
    {
        for(i=0; i<10; i++)
            arr[i]=0;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            k=i;
            do
            {
                j=k%10;
                k/=10;
                arr[j]++;
            }
            while(k!=0);

        }
        for(i=0; i<10; i++)
        {
            cout<<arr[i];
            if(i==9)
                cout<<endl;
                else
                    cout<<" ";
        }
    }
}
