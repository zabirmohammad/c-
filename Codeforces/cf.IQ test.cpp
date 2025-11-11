#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,last_even,last_odd,even_count=0,odd_count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>m;
        if(m%2==0)
        {
            even_count++;
            last_even=i+1;
        }
        else
        {
            odd_count++;
            last_odd=i+1;
        }
    }
    if(even_count==1)
        cout<<last_even<<endl;
    else
        cout<<last_odd<<endl;
}
