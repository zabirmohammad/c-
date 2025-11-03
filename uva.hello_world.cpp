#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int n,line,cunt,i,j=1;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        i=0;
        cunt=0;
        line=1;
        while(line!=n)
        {
            line+=pow(2,i);
            if(line<=n)
            {
                i++;
                cunt++;
            }
            else if(line>n-1)
            {
                cunt++;
                line=n;
            }
        }
        cout<<"Case "<<j++<<": "<<cunt<<endl;

    }
    return 0;
}
