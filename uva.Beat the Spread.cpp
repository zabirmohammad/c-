#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long int t,s,d,i,j,a,b;
    string u="impossible";
    bool pool=false;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        a=s+d;
        b=s-d;
        if(a%2==1||b%2==1||s<d)
            cout<<u<<endl;
        else{
        i=(s+d)/2;
        j=(s-d)/2;
        //i=0,j=s;
        /*for(i=0; i<s; i++)
        {
            for(j=s; j>0; j--)
            {
                if(i+j==s)
                {
                    a=abs(i-j);
                    if(a==d)
                    {
                        pool=true;
                        break;
                    }
                }
            }
            if(pool==true)
                break;
        }*/
        if(i<j)
            swap(i,j);
        cout<<i<<" "<<j<<endl;
        /*if(pool==true)
        cout<<i<<" "<<j<<endl;
        else
            cout<<u<<endl;
        pool=false;*/
        }

    }
}
