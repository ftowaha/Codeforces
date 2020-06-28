#include<stdio.h>
int main()
{
   long long int n,k;
    scanf("%lld",&n);
    k=n*(n+1)/2;
    k=k%2;
    printf("%lld\n",k);
    return 0;
}
