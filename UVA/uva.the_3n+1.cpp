#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int i,j,count=1,max=-99999,n,k,x,y;
    while(cin>>x>>y)
    {
        i=x;
        j=y;
        if(i<j)
        {
            swap(i,j);
        }
        k=i;
        while(k>=j)
        {
            n=k;

            while(n!=1)
            {
                if(n%2==0)
                    n/=2;
                else
                    n=(3*n)+1;

                count++;
            }
            if(count>max)
                max=count;

            k--;
            count =1;
        }
        cout<<x<<" "<<y<<" "<<max<<endl;
        max=-99999;count=1;
    }
}
