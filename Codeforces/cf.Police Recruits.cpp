#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,crime,recruit;
    cin>>n;
    recruit=0;
    crime=0;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(m>0)
            recruit+=m;
        else if(m<0&&recruit==0)
            crime++;
        else
        {
            recruit--;
        }

    }
    cout<<crime<<endl;
}
