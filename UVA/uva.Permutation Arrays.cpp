/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>index;
    int n,i,j,cpy[1000],t,max=-99999;
    char c,str[1000],s[1000];
    double arr[1000],x;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        gets(str);
        j=1;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!=' ')
            {
                index[j]=str[i]-'0';
                if(index[j]>max)
                {
                    max=index[j];
                    j++;
                }
            }

        }
        for(i=1; i<=max; i++)
        {
            cin>>x;
            arr[index[i]]=x;
        }
        for(i=0; i<max; i++)
            cout<<arr[i]<<endl;
        max=-999999;
        index.clear();
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>index;
    int n,i,j,cpy[1000],t,max=-99999;
    char c,str[1000],s[1000];
    double arr[1000],x;
    cin>>t;
    scanf("%c",&c);
    cin.ignore();
    while(t--)
    {
        gets(str);
        //gets(s);
        j=1;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!=' ')
            {
                index[j]=str[i]-'0';
                cout<<index[j]<<" ";
                if(index[j]>max)
                {
                    max=index[j];
                    j++;
                }
            }

        }
        for(i=1; i<=max; i++)
        {
            cin>>x;
            arr[index[i]]=x;
        }
        for(i=0; i<max; i++)
            cout<<arr[i]<<endl;
        max=-999999;
        index.clear();
    }
}

