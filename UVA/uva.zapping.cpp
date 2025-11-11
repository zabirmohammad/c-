#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int a,b,arr[2],mini,choice;
    while(1)
    {
        mini=10000;
        cin>>arr[0]>>arr[1];
        if(arr[0]<0||arr[1]<0)
            break;
        sort(arr,arr+2);
        choice=arr[1]-arr[0];
        if(choice<mini)
            mini=choice;
        choice=(100-arr[1])+arr[0];
        if(choice<mini)
            mini=choice;
            cout<<mini<<endl;


    }
}
