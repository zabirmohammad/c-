#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    long long m,n,i,j,k,x,count;
    vector<long long>jack;
    vector<long long>jill;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        count=0;
       for(i=0;i<n;i++){
            cin>>k;
            jack.push_back(k);
       }
       for(i=0;i<m;i++){
            cin>>k;
            jill.push_back(k);
       }
       i=0;j=0;
       while(i<n&&j<m)
       {
           if(jack[i]==jill[j])
           {
               count++;i++;j++;
           }
           else if(jack[i]>jill[j])
                j++;
           else
                i++;
       }
       cout<<count<<endl;
       jack.clear();
       jill.clear();
    }
}
