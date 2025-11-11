#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int t,n,i,j,position,arr[100];
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        position=0;
        for(i=0;i<n;i++)
        {
            cin>>s;
            if(s=="LEFT")
            {
                position--;
                arr[i+1]=-1;
            }
            else if(s=="RIGHT")
            {
                position++;
                arr[i+1]=1;
            }
            else
            {
                cin>>s>>j;
                position+=arr[j];
                arr[i+1]=arr[j];

            }

        }
        cout<<position<<endl;
    }
}
