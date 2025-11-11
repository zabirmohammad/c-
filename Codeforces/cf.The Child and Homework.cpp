#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    int a1,b1,c1,d1;
    cin>>a>>b>>c>>d;
    a1=a.size()-2;
    b1=b.size()-2;
    c1=c.size()-2;
    d1=d.size()-2;
    if(a1>=2*b1&&a1>=2*c1&&a1>=2*d1||a1<=b1/2&&a1<=c1/2&&a1<=d1/2)
        cout<<"A"<<endl;
    else if(b1>=2*a1&&b1>=2*c1&&b1>=2*d1||b1<=a1/2&&b1<=c1/2&&b1<=d1/2)
        cout<<"B"<<endl;
    else if(c1>=2*a1&&c1>=2*b1&&c1>=2*d1||c1<=a1/2&&c1<=b1/2&&c1<=d1/2)
        cout<<"C"<<endl;
    else if(d1>=2*a1&&d1>=2*b1&&d1>=2*c1||d1<=a1/2&&d1<=b1/2&&d1<=c1/2)
        cout<<"D"<<endl;
    else
        cout<<"C"<<endl;
}
