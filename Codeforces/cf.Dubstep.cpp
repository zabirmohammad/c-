#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,n;
    bool new_word=false,first=true;
    cin>>s;
    i=0;
    while(i<s.length())
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=3;
            if(first==false)
            {
                cout<<" ";
                first=true;
            }

        }
        else{
            cout<<s[i];
            i++;
            first=false;

        }
    }
}
