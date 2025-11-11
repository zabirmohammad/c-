#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,r;
    cin>>x1>>y1>>x2>>y2;

    if(x1==x2){
        r=abs(y1-y2);
        y3=y1;
        y4=y2;
        x3=x1+r;
        x4=x2+r;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(y1==y2){
        r=abs(x1-x2);
        x3=x1;
        x4=x2;
        y3=y1+r;
        y4=y2+r;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(abs(x1-x2)==abs(y1-y2))
    {
        r=abs(x1-x2);
        x3=x1;
        x4=x2;
        y3=y2;
        y4=y1;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else
        cout<<"-1"<<endl;

}
