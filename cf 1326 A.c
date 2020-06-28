#include<stdio.h>
int main()
{
    long long int n,a,b=0,i,j,k=9,l=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        char A[a];
        if(a==1)
            printf("-1\n");
        else
        {
        for(j=0;j<a-1;j++)
        {
            A[j]='9';
        }
        A[a-1]='8';
        for(j=0;j<a;j++)
        {
            printf("%c",A[j]);
        }
        printf("\n");
        }
    }
    return 0;
}
