#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int A[5],i,x=0,t,j;
    for(i=0;i<4;i++)
    {
        scanf("%lld",&A[i]);
        for(j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        if(A[i]==A[i-1])
            x++;
    }
    printf("%lld\n",x);
    return 0;
}
