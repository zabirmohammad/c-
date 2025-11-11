#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,tl,x,y;
    cin>>n>>m;
    int correct[n+1],wrong[m+1];
    for(i=0;i<n;i++)
        cin>>correct[i];
    for(i=0;i<m;i++)
        cin>>wrong[i];
    sort(correct,correct+n);
    sort(wrong,wrong+m);
    x=max(correct[n-1],2*correct[0]);
    if(x>=wrong[0])
        cout<<"-1"<<endl;
    else
        cout<<max(correct[n-1],2*correct[0])<<endl;
}
