#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,slice,drink,salt,ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    drink=(k*l)/(n*nl);
    slice=(c*d)/n;
    salt=p/(n*np);
    cout<<min(drink,min(slice,salt))<<endl;
}
