#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    unsigned int n1,n2;
    long long int i,n,s,s1,s2,count=0,pre=0;
    while(cin>>n1>>n2)
    {
        if(n1==0&&n2==0)
            break;
        if(n1<n2)
            swap(n1,n2);
        while(n1!=0)
        {
            s1=n1%10;
            s2=n2%10;
            n1/=10;
            n2/=10;
            s=s1+s2+pre;
            if(s>9)
            {
                count++;
                pre=s/10;
            }
            else
                pre=s/10;

        }
        if(count>1)
            cout<<count<<" carry operations."<<endl;
        else if(count==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<"No carry operation."<<endl;
        count=0;
        pre=0;
    }
}
