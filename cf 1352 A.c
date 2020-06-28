#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,l,j,k;
    scanf("%d",&n);
    char A[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",&A);
        l=0;
        for(j=0;j<strlen(A);j++)
        {
            if(A[j]!='0')
                l++;
        }
        printf("%d\n",l);
        for(j=0;j<strlen(A);j++)
        {
            if(A[j]!='0')
                {
                    printf("%c",A[j]);
                    for(k=j+1;k<strlen(A);k++)
                printf("0");
                }
                printf(" ");
        }
    }
    return 0;
}
