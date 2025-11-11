#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,first,second,f_digit,s_digit;

    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        f_digit=n%10;
        s_digit=((n/10)%10);
        first=n/10;
        second=(n/100)*10+f_digit
        ;
        if(first>second)
            cout<<first<<endl;
        else
            cout<<second<<endl;
    }
}
