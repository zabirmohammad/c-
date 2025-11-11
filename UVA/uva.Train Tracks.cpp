#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int i,j,t,m,f;
    char str[200],c;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        gets(str);
        m=f=0;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='M')
                m++;
            else if(str[i]=='F')
                f++;
            else
                continue;
        }
        if(m==1&&f==1)
            cout<<"NO LOOP"<<endl;
        else if(m!=f)
            cout<<"NO LOOP"<<endl;
        else
            cout<<"LOOP"<<endl;
    }
}
