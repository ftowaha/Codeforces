#include<stdio.h>
int main()
{
    char A[10]="0000000000";
    int i,j,n,k;
    scanf("%d",&n);
    char B[n+1];
    scanf("%s",&B);
    for(i=0;i<n;i++)
    {
        if(B[i]=='L')
        {
        for(j=0;j<n;j++)
        {
            if(A[j]=='0')
                {
                    A[j]='1';
                    break;
                }
        }
        }
        else if(B[i]=='R')
        {
            for(j=9;j>=0;j--)
        {
            if(A[j]=='0')
                {
                    A[j]='1';
                    break;
                }
        }
        }
        else
        {
            k=B[i]-'0';
            A[k]='0';
        }
    }
    for(i=0;i<10;i++)
        printf("%c",A[i]);
    return 0;
}
