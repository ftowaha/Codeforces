#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l,m=0,x;
    char A[1000];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    scanf("%s",&A);
    m=0;
    k=0;
    l=0;
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]=='1')
        {
            k=i;
            break;
        }
    }
    for(i=strlen(A)-1;i>=0;i--)
    {
        if(A[i]=='1')
        {
            l=i;
            break;
        }
    }
    for(i=k;i<l;i++)
    {
        if(A[i]=='0')
            m++;
    }
    printf("%d\n",m);
    }
    return 0;
}
