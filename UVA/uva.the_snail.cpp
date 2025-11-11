#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    float cunt=0,h,down,factor;
    float up,fsaturation,n=0;
    while(1)
    {
        cin>>h>>up>>down>>factor;
        if(h==0)
            break;
        fsaturation=up*(factor/100);
        cunt=0;
        n=0;
        while(1)
        {
            cunt++;
            if(up>0)
                n=n+up;
            if(n>h)
            {
                cout<<"success on day "<<cunt<<endl;
                break;
            }
            n-=down;
            if(n<0)
            {
                cout<<"failure on day "<<cunt<<endl;
                break;
            }
            up-=fsaturation;


        }

    }
}
