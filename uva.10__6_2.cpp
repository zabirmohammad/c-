#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,length;
    double radious,width,area_circle,area_rectangle;
    cin>>t;
    while(t--)
    {
        cin>>length;
        radious=length*0.2;
        width=length*0.6;
        area_circle=pi*radious*radious;
        area_rectangle=(length*width)-area_circle;
        //cout<<fixed<<setprecision(2)<<area_circle<<" "<<area_rectangle<<endl;
        printf("%0.2lf %0.2lf\n",area_circle,area_rectangle);
    }
}
