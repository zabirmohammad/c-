#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    long int hashmat,opponent,temp;
    while(cin>>hashmat)
    {
        cin>>opponent;
        if(hashmat>opponent)
        {
            temp=hashmat;
            hashmat=opponent;
            opponent=temp;
        }
        cout<<opponent-hashmat<<endl;
    }
    return 0;
}
