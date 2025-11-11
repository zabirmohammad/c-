#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,strength,i,j,k;
    bool ans=true;
    cin>>strength>>n;
    int dragon[n][2];
    for(i=0; i<n; i++)
        for(j=0; j<2; j++)
            cin>>dragon[i][j];

    for(i=0;i<n-1;i++)
    {
        k=0;
        for(j=n-1-i;j>0;j--)
        {
            if(dragon[k][0]>dragon[k+1][0]){
                swap(dragon[k][0],dragon[k+1][0]);
                swap(dragon[k][1],dragon[k+1][1]);
            }
            k++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(dragon[i][0]<strength)
        {
             strength+=dragon[i][1];
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    if(ans==true)
        cout<<"YES"<<endl;

}
