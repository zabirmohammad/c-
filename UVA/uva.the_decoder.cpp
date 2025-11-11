#include<bits/stdc++.h>
using namespace std;

int main()
{
    char code[1000],ans[100];
    int i,j,n;
    while(gets(code))
    {
        for(i=0;i<strlen(code);i++)
        {
            ans[i]=code[i]-7;

            cout<<ans[i];
        }
        cout<<endl;
    }
}
