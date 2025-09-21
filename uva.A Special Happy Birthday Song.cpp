#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,j;
    bool all=false;
    string wish[16]={"Happy", "birthday", "to", "you","Happy", "birthday", "to", "you","Happy", "birthday", "to","Rujia","Happy", "birthday", "to", "you"};
    cin>>n;
    //string name[n];
    vector<string>name(n);
    for(i=0;i<n;i++)
        cin>>name[i];


    i=0;j=0;

    while(j<16)
    {
        cout<<name[i]<<": "<<wish[j]<<endl;
        if(i+1==n)
        {
            all=true;
            i=-1;
        }
        if(j+1==16&&all==false)
            j=-1;
        i++;
        j++;
    }
}
