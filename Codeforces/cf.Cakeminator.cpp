#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,empty_row=0,empty_column=0,row,column;
    bool empty_r=true,empty_c=true;
    cin>>r>>c;
    char arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>arr[i][j];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]=='S')
                empty_r=false;
        }
        if(empty_r==true)
            empty_row++;
        else
            empty_r=true;

    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(arr[j][i]=='S')
                empty_c=false;
        }
        if(empty_c==true)
            empty_column++;
        else
            empty_c=true;
    }
    row=empty_row*c;
    column=empty_column*r;
    cout<<(row+column)-(empty_row*empty_column)<<endl;
}
