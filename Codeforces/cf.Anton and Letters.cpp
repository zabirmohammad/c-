#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=0,count=0;
    char arr[1500],alpha[26]={};
    bool found=false;
    gets(arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(isalpha(arr[i]))
        {
            for(j=0;j<k;j++)
            {
                if(arr[i]==alpha[j])
                    found=true;
            }
            if(found==false){
                alpha[k++]=arr[i];
                count++;
            }
        }
        found=false;

    }
    cout<<count<<endl;
}
