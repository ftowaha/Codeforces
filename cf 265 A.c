#include<stdio.h>
int main()
{
    int i=0,j=0;
    char A[10000],B[10000];
    scanf("%s %s",&A,&B);
    while(A[i]!='\0')
    {
        if(A[i]==B[j])
            j++;
        i++;
    }
    printf("%d\n",j);
    return 0;
}
