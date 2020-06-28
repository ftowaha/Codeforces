#include<stdio.h>
int main()
{
    int a,b,c,k=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b+c)
    {
        k=a-(b+c)+1;
    }
    if(b>=a+c)
    {
       k=b-(a+c)+1;
    }
    if(c>=a+b)
    {
        k=c-(a+b)+1;
    }
    printf("%d\n",k);
    return 0;
}
