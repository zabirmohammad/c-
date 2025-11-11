#include<bits/stdc++.h>
using namespace std;
int remove_zero(int n)
{
    int s[25];
    int sum=0,k=0;
    while(n!=0)
    {
        if(n%10!=0){
            s[k]=n%10;
            k++;
        }
        n/=10;
    }
    for(int i=0;i<k;i++)
    {
        sum=sum+(s[i]*pow(10,i));
    }
    return sum;

}
int main()
{
    string first,second;
    int n,m,n1,m1,sum1,sum2,sum3,sum4;
    int i,j;
    cin>>n>>m;
    sum1=n+m;
    n1=remove_zero(n);
    m1=remove_zero(m);
    sum2=remove_zero(sum1);
    /*sum3=n1+m1;
    sum4=remove_zero(sum3);
    cout<<n1<<endl<<m1<<endl<<sum1<<endl<<sum2<<endl<<sum3<<endl<<sum4<<endl;*/
    if(n1+m1==sum2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


