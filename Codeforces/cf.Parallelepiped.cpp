#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a,b,c;
    cin>>a1>>a2>>a3;
    a=sqrt((a1*a3)/a2);
    b=sqrt((a1*a2)/a3);
    c=sqrt((a2*a3)/a1);
    cout<<4*(a+b+c)<<endl;
}
