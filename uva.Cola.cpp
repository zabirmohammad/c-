
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i,j,k,total=0,ex=0;
    while(cin>>n)
    {
        ex=0;
        total=0;
        total+=n;
        n+=1;
        while(n>=3)
        {
            ex=n%3;
            n/=3;
            total+=n;
            n+=ex;


        }
        cout<<total<<endl;


    }
}



