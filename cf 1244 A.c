#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,d,e,i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        if(a%c!=0)
            a=(a/c)+1;
        else a=a/c;
        if(b%d!=0)
            b=(b/d)+1;
        else b=b/d;
        if(a+b<=e)
            printf("%d %d\n",a,b);
        else printf("-1\n");
    }
    return 0;
}
