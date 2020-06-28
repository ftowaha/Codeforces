#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    char A[n];
    scanf("%s",&A);
    for(i=0;i<n;i++)
    {
        if(A[i]=='x'&&A[i+1]=='x'&&A[i+2]=='x')
        {
            c++;
            A[i]='0';
        }
    }
    printf("%d\n",c);
    return 0;
}
