#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,i,j,n,m,num,maxi;
   bool flag;
   vector<int> v;
   cin>>t;
   while(t--)
   {
       cin>>n;
       v.clear();
       for(i=0;i<n;i++){
            cin>>num;
           v.push_back(num);
       }
        sort(v.begin(),v.end(),greater<int>());
        //for(i=0;i<n;i++)
          //  cout<<v[i]<<endl;
        for(i=n;i>0;i--)
        {
            m=0;
            for(j=0;j<i;j++)
            {
                if(i<=v[j]){
                    m++;
                }
                else
                    break;
            }
            if(m==i)
            {
                break;
            }
        }
        cout<<i<<endl;
   }
}
