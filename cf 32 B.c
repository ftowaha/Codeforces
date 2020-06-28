#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char A[10000];
    scanf("%s",&A);
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]=='-'&&A[i+1]=='.')
            {
                printf("1");
                i++;
            }
        else if(A[i]=='-'&&A[i+1]=='-')
            {
                printf("2");
                i++;
            }
           else if(A[i]=='.')
            printf("0");
    }
    return 0;
}
