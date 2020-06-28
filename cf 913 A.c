#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,x;
    scanf("%lld %lld",&a,&b);
    x=pow(2,a);
    a=b%x;
    printf("%lld\n",a);
    return 0;
}
