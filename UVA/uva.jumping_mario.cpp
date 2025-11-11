#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,wall[100],high,low,j=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        high=0;low=0;
        for(int i=0;i<n;i++)
            cin>>wall[i];
        for(int i=0;i<n-1;i++)
        {
            if(wall[i]<wall[i+1])
                high++;
            else if(wall[i]>wall[i+1])
                low++;
        }
        printf("Case %d: %d %d\n",j++,high,low);
    }

    return 0;
}
