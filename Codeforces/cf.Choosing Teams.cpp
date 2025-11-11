#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,count=0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>j;
        if(j+k<=5)
            count++;
    }
    cout<<count/3<<endl;
}
