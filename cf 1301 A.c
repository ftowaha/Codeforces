#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l;
    char A[1000],B[1000],C[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        l=0;
        scanf("%s %s %s",&A,&B,&C);
        k=strlen(A);
        for(j=0;j<k;j++)
        {
            if(A[j]==C[j] || B[j]==C[j])
                l++;
        }
        if(l==k)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
