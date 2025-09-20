#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    vector<char>v;
    char a[1010],b[1010];
    int i,j,x,n;
    while(gets(a)&&gets(b))
    {

        for(i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j]){
                    v.push_back(a[i]);
                    break;
                }
            }
        }

        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i];
        cout<<endl;
        v.clear();
    }
}
