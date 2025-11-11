#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i,j=0,cunt=0;
    cin>>n;
    while(n--)
    {
        int arr[10];
        cunt=0;
        for(i=0; i<10; i++)
            cin>>arr[i];
        j++;
        if(arr[0]<arr[1])
        {
            for(i=0; i<9; i++)
            {
                if(arr[i]<arr[i+1])
                    cunt++;
                else
                {
                    cunt=0;
                    break;
                }
            }
        }
        if(arr[0]>arr[1])
        {
            for(i=0; i<9; i++)
            {
                if(arr[i]>arr[i+1])
                    cunt++;
                else
                {
                    cunt=0;
                    break;
                }
            }
        }
        if(j==1)
            cout<<"Lumberjacks:"<<endl;
        if(cunt==9)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;


    }
    return 0;
}
