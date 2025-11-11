#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],con=1,max_con=1;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            con++;
            if(con>max_con)
                max_con=con;
        }
        else
            con=1;
    }
    if(max_con<=(n+1)/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
