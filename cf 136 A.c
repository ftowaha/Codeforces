#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    int A[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        A[a]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
