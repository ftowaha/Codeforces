#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,k=0,l;
    scanf("%d",&n);
    char A[10000],B[10];
    for(i=0;i<n;i++)
    {
        scanf("%s",&B);
        if(B[0]=='O'&&B[1]=='O'&&k==0)
        {
            B[0]='+';
            B[1]='+';
            k=1;
        }
        else if(B[3]=='O'&&B[4]=='O'&&k==0)
            {
            B[3]='+';
            B[4]='+';
            k=1;
        }
        strcat(A,B);
        l=strlen(A);
        A[l]='.';
    }
    if(k==1)
        {
            printf("YES\n");
            for(i=0;i<strlen(A);i++)
            {
                if(A[i]=='.')
                    printf("\n");
                else printf("%c",A[i]);
            }
        }
    else
        printf("NO\n");
    return 0;
}
