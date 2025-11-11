#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,chest=0,bicep=0,bck=0,arr[25];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i%3==1)
            chest+=arr[i];
        else if(i%3==2)
            bicep+=arr[i];
        else
            bck+=arr[i];
    }
    if(chest>bck&&chest>bicep)
        cout<<"chest"<<endl;
    else if(bicep>chest&&bicep>bck)
        cout<<"biceps"<<endl;
    else
        cout<<"back"<<endl;

}
