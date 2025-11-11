#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    vector<int> v;
    int i,j,n,av,len;
    while(cin>>n)
    {
        v.push_back(n);
        sort(v.begin(),v.end());
        len=v.size();
        if(len%2==1){
            av=len/2;
            cout<<v[av]<<endl;
        }
        else
        {
            i=floor((len-1)/2);
            j=len/2;
            av=floor((v[i]+v[j])/2);
            cout<<av<<endl;
        }

    }
}
