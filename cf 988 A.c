#include<stdio.h>
int main()
{
    int m,n,k=0,j,l=0,i;
    scanf("%d %d",&m,&n);
    int A[m],B[n];
    for(i=0;i<m;i++)
    {
        k=0;
        scanf("%d",&A[i]);
        if(l<n)
        {
            for(j=0;j<i;j++)
        {
            if(A[i]==A[j])
                {
                    k=1;
                    break;
                }
        }
        if(k==0)
        {
           B[l]=i+1;
           l++;
        }
        }
    }
    if(l<n)
        printf("NO\n");
        else
        {
            printf("YES\n");
            for(i=0;i<n;i++)
                printf("%d ",B[i]);
        }
    return 0;
}
