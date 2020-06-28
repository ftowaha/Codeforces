#include<stdio.h>
int main()
{
    int n,a,b,c,d,k,l,i,m=1;
    scanf("%d",&n);
    scanf("%d %d %d %d",&a,&b,&c,&d);
    k=a+b+c+d;
    for(i=1;i<n;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        l=a+b+c+d;
        if(l>k)
            m++;
    }
    printf("%d\n",m);
    return 0;
}
