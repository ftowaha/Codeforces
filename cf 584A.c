#include<stdio.h>
int main()
{
    int n,t,i,k=1,l;
    scanf("%d %d",&n,&t);
    char A[n];
    if(n==1&&t==10)
        printf("-1\n");
    else
    {
        if(t<10)
        {
            for(i=0;i<n;i++)
        printf("%d",t);
        }
        else
        {
            A[0]='1';
            for(i=1;i<n;i++)
                A[i]='0';
            for(i=0;i<n;i++)
                printf("%c",A[i]);
        }
    }
    return 0;
}
