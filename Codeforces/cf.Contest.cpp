#include<bits/stdc++.h>
using namespace std;
int main(){
    int mc,vc,mt,vt,mp1,vp1,mp2,vp2;
    cin>>mc>>vc>>mt>>vt;
    mp1=mc-((mc/250)*mt);
    vp1=vc-((vc/250)*vt);
    mp2=(3*mc)/10;
    vp2=(3*vc)/10;

    if(max(mp1,mp2)>max(vp1,vp2))
        cout<<"Misha"<<endl;
    else if(max(mp1,mp2)<max(vp1,vp2))
        cout<<"Vasya"<<endl;
    else
        cout<<"Tie"<<endl;
}
