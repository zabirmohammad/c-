#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,m,count=0,i,j=0,k,l,arr[10];
    bool same=false;
    while(cin>>n>>m)
    {
        for(i=n;i<=m;i++)
        {
            l=i;
            while(l!=0)
            {
                    arr[j]=l%10;
                    l/=10;
                    j++;
            }
            sort(arr,arr+j);
            for(k=0;k<j-1;k++)
            {
                if(arr[k]==arr[k+1]){
                    same=true;
                    break;
                }
            }
            if(same==false)
                count++;
            //for(k=0;k<j;k++)
            //{

                //count++;
           // }
            j=0;
            same=false;
        }
        cout<<count<<endl;
        count=0;
    }
}
