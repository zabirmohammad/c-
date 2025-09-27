#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t1,t2,fin,att,arr[3],t,c=0;
    double sum;
    cin>>t;
    while(t--)
    {
        cin>>t1>>t2>>fin>>att>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        sum=t1+t2+fin+att+double(arr[1]+arr[2])/2;
        cout<<"Case "<<++c<<": ";
        if(sum>=90)
            cout<<"A"<<endl;
        else if(sum>=80)
            cout<<"B"<<endl;
        else if(sum>=70)
            cout<<"C"<<endl;
        else if(sum>=60)
            cout<<"D"<<endl;
        else
            cout<<"F"<<endl;

    }
}
