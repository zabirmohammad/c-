#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,j,c,print_num,center;
    bool p;
    vector<int> prime;
    while(cin>>n>>c)
    {
        for(i=1; i<=n; i++)
        {
            p=true;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    p=false;
                    break;
                }
            }
            if(p==true)
                prime.push_back(i);
        }
         cout<<n<<" "<<c<<":";
        if(2*c>=prime.size())
        {
            for(i=0;i<prime.size();i++){
                cout<<" "<<prime[i];

            }

        }
        else
        {
            if(prime.size()%2==0)
                print_num=2*c;
            else
                print_num=2*c-1;

            center=(prime.size()-print_num)/2;
            while(print_num--)
            {
                cout<<" "<<prime[center];
                center++;
            }
        }

        cout<<endl<<endl;
        prime.clear();
    }
}
