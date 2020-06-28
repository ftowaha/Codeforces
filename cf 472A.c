#include<stdio.h>
int main()
{
    long long int n,i,j=8,k=0,l;
    scanf("%lld",&n);
    l=n-j;
    if(l%2!=0)
        {
            l--;
            j++;
        }
    printf("%lld %lld\n",l,j);
    return 0;
}
