#include<stdio.h>
int main()
{
    int n,i,a,b,c,d,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        x=(a+b)/2;
        y=(c+d)/2;
        if(x==y)
            y=y+1;
        printf("%d %d\n",x,y);
    }
    return 0;
}
