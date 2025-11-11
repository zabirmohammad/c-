#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long long n=0,i=0,j=0,k=0,count=0,len,leap,flag;
    string s;
    while(cin>>s)
    {
        len=s.size();
        long long m4,m100,m400,m15,m55;
        flag=leap=m4=m100=m400=m15=m55=0;
        for(i=0;i<len;i++)
        {
            m4=((m4*10)+(s[i]-'0'))%4;
            m100=((m100*10)+(s[i]-'0'))%100;
            m400=((m400*10)+(s[i]-'0'))%400;
            m15=((m15*10)+(s[i]-'0'))%15;
            m55=((m55*10)+(s[i]-'0'))%55;
        }

        if(k!=0)
        {
            cout<<endl;
        }
        k=1;
        if(m400==0||m100!=0&&m4==0){
            cout<<"This is leap year."<<endl;
            flag=1;
            leap=1;
        }


        if(m15==0){
            cout<<"This is huluculu festival year."<<endl;
            flag=1;
        }
        if(m55==0&&leap==1){
            cout<<"This is bulukulu festival year."<<endl;
            flag=1;
        }
        if(flag==0)
            cout<<"This is an ordinary year."<<endl;


    }

}

