#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int i,t;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;

        if(s.length()==5)
            printf("3\n");
        else
        {
            if(s[0]=='t'&&s[1]=='w'||s[1]=='w'&&s[2]=='o'||s[0]=='t'&&s[2]=='o')
                printf("2\n");
            else
                cout<<1<<endl;
        }
    }
    return 0;
}
