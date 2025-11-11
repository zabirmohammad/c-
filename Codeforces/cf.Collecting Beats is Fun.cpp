#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,f,arr[10];
    bool possible=true;
    cin>>k;
    char c[4][4];
    for(i=1; i<=9; i++)
        arr[i]=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            cin>>c[i][j];
            if(isdigit(c[i][j])){
                f=c[i][j]-'0';
                arr[f]++;
            }
        }
    }
    for(i=1;i<=9;i++)
        {
            if(arr[i]>2*k)
            {
                possible=false;
                break;
            }
        }
        if(possible)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

}
