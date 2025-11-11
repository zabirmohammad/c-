#include<bits/stdc++.h>
using namespace std;
#define size 5
int main()
{
    int arr[size][size],i,j,row,coloum,n;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row=i;coloum=j;
            }
        }

    }
    cout<<abs(row-2)+abs(coloum-2)<<endl;
}
