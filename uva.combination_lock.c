
#include<stdio.h>
int main()
{
    int pos,first,second,third;
    while(scanf("%d %d %d %d",&pos,&first,&second,&third)==4)
    {
        if(pos==0&&first==0&&second==0&&third==0)
            break;
        printf("%d\n",1080 + ((pos - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);

        return 0;


    }
}
