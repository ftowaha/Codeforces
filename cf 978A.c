#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    scanf("%d",&n);
    int A[n],l=0;
    k=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        for(j=0;j<i;j++)
        {
            if(A[i]==A[j])
            {
                k--;
                A[j]=-1;
                break;
            }
        }
    }
    printf("%d\n",k);
    for(i=0;i<n;i++)
    {
        if(A[i]!=-1)
            printf("%d ",A[i]);
    }
    return 0;
}
