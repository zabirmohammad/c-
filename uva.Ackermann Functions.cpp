#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long i,l,h,v_max=0,count=0,max=-99999,v,l_temp,h_temp;;
    while(cin>>l>>h)
    {

        if(l==0&&h==0)
            break;

        if(l>h)
            swap(l,h);
        l_temp=l;
        h_temp=h;
        while(l<=h)
        {
            v=l;
            do
            {
                if(v%2==1)
                    v=3*v+1;
                else
                    v=v/2;
                count++;
            }while(v!=1);

            if(count>max)
            {
                max=count;
                v_max=l;
            }
            l++;
            count=0;
        }

        cout<<"Between "<<l_temp<<" and "<<h_temp<<", "<<v_max<<" generates the longest sequence of "<<max<<" values."<<endl;
        max=-99999;
        count=0;

    }
}
