#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,count,j;
    char s[10001];
    while(gets(s))
    {
        count=0;
        for(i=0;i<strlen(s);i++)
        {
            if(isalpha(s[i])&& !isalpha(s[i+1]))
                count++;
        }
        cout<<count<<endl;
    }
}
