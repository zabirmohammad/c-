/*int main()
{
     int n,m,capacity,seq=1;
     while (cin>>n>>m>>capacity)
     {
          if (n==0 && m==0 && capacity==0) return 0;
          int swis[21]={0};
          int c[21];
          for (int i=1;i<=n;i++) cin>>c[i];
          int max=0,sum=0;
          for (int i=0;i<m;i++)
          {
               int t;
               cin>>t;
               if (swis[t]==0)
               {
                sum+=c[t];
                swis[t]=1;
               }
               else
               {
                    sum-=c[t];
                    swis[t]=0;
                }
               if (sum>max) max=sum;
          }
          cout<<"Sequence "<<seq++<<endl;

          if (max>capacity)
            cout<<"Fuse was blown."<<endl;
          else
           cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<max<<" amperes."<<endl;
          cout<<endl;
     }
 return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,m,c,i,j,sum=0,max=-99999,cas=0;
    bool ans=true;
    while(cin>>n>>m>>c)
    {
        if(n==0&&m==0&&c==0)
            break;
        sum=0;
        max=-99999;
        ans=true;
        int req[n],tog[n],operation[m];
        for(i=1;i<=n;i++){
            cin>>req[i];
            tog[i]=0;
        }
        for(i=1;i<=m;i++)
        {
            cin>>operation[i];
        }
        for(i=1;i<=m;i++)
        {
            tog[operation[i]]++;
            if(tog[operation[i]]%2==1)
                sum+=req[operation[i]];
            else if(tog[operation[i]]%2==0)
                sum-=req[operation[i]];

            if(sum>max&&sum<=c)
                max=sum;
            if(sum>c)
            {
                ans=false;
                break;
            }
        }
        if(ans==false){
            printf("Sequence %d\n",++cas);
            printf("Fuse was blown.\n");
        }
        else
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n",++cas,max);
        cout<<endl;
    }
}
