#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[10],n,i,beg,End,mid,item=2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        cin>>array[i];
    sort(array,array+n);
    beg=0;
    End=n-1;
    mid=(beg+End)/2;
    while(beg<=End&&array[mid]!=item)
    {

        if(array[mid]>item)
            End=mid-1;
        else
            beg=mid+1;
        mid=(beg+End)/2;
    }
    if(array[mid]==item)
        cout<<"dound"<<mid<<" position."<<endl;
}
