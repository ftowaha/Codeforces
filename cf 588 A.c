#include<stdio.h>
int main()
{
    int n,a,b,j,i;
    long long int k=0;
    scanf("%d",&n);
    int A[n];
    scanf("%d %d",&a,&b);
    for(i=1;i<n;i++)
    {
        k=k+(a*b);
       scanf("%d %d",&a,&A[i]);
       if(A[i]<b)
        b=A[i];

    }
    k=k+(a*b);
    printf("%lld\n",k);
    return 0;
}
