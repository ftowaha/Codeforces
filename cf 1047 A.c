#include<stdio.h>
int main()
{
    long long int a,x,y,z,b;
    scanf("%lld",&a);
    x=a-2;
    y=1;
    z=1;
    if(x%3==0)
    {
        x--;
        y++;
    }
    printf("%lld %lld %lld",z,y,x);
    return 0;
}
