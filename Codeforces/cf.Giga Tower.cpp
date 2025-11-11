#include<bits/stdc++.h>
using namespace std;
/*bool is_eight(long long n)
{
    if(n!=0)
    {
        while(n!=0)
        {
            if(abs(n%10)==8)
            {
                return true;
            }
            n/=10;
        }
    }
    else
        return false;
}*/
bool is_eight(long long n)
{
    if(n!=0)
    {
        while(n!=0)
        {
            if(abs(n%10)==8)
            {
                return true;
            }
            n/=10;
        }
    }
    else
        return false;
}
int main()
{
    long long a,b=1,n,i,j;
    bool has_eight;
    cin>>a;
    /*a+=1;
    while(!is_eight(a))
    {
        a++;
        b++;
    }
    cout<<b<<endl;
    */

for(i=a+1;i<a+17;i++)
{
    if(is_eight(i))
    {
        cout<<b<<endl;
        return 0;
    }
    else
        b++;

}
}
