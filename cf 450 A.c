#include<stdio.h>
int main()
{
    long long int n,i,a,b=-1,c;
    scanf("%lld %lld",&n,&c);
    long long int k,x,y;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        x=a/c;
        y=a%c;
        if(y!=0)
            x=x+1;
        if(x>=b)
        {
            b=x;
            k=i;
        }
    }
    printf("%d\n",k);
    return 0;
}
