#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i,m;
    vector<int>arr;
    while(cin>>n&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            cin>>m;
            arr.push_back(m);
        }
        sort(arr.begin(),arr.end());
        for(i=0;i<arr.size();i++){
            if(i!=0)
                cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
        arr.clear();
    }
}
