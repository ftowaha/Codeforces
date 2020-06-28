#include<stdio.h>
int main()
{
    int a,b,c;
    int x=0,y=0,z=0,i,m=0;
    scanf("%d %d %d",&a,&b,&c);
    while(1)
    {
        x++;
        y=x*2;
        z=y*2;
        if(x>a||y>b||z>c)
            break;
        m=x+y+z;
    }
    printf("%d\n",m);
    return 0;
}
