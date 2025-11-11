#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,i,j,prize,items;

    vector <int> my;
    cin>>n>>v;
    for(i=0;i<n;i++)
    {
        bool bargain=false;
        cin>>items;
        for(j=0;j<items;j++)
        {
            cin>>prize;
            if(!bargain&&v>prize){
                    bargain=true;
                my.push_back(i+1);
            }
        }
    }
    cout<<my.size()<<endl;
    for(i=0;i<my.size();i++)
            cout<<my[i]<<" ";


}
