#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=2;
    char t[56];
    vector<char> vec;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>t[i];
    i=1;
    while(i<=n)
    {
        vec.push_back(t[i]);
        i+=j;
        j++;
    }
    for(i=0;i<vec.size();i++)
        cout<<vec[i];
    cout<<endl;
}
