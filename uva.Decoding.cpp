#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,n,i,j,cse=0,count;
    string s,digit;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>s;
        i=0;
        printf("Case %d: ",++cse);
        while(i<s.size())
        {
            if(isalpha(s[i]))
            {
                c=s[i];
                i++;
                digit="";
                count=1;
                n=0;
                while(isdigit(s[i]))
                {
                    digit+=s[i];
                    i++;
                }
                for(j=digit.size()-1;j>=0;j--){
                    n+=(count*(digit[j]-'0'));
                    count*=10;
                }
                for(j=0;j<n;j++)
                    cout<<c;
            }
        }
        cout<<endl;
    }
}
