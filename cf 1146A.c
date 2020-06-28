#include<stdio.h>
#include<string.h>
int main()
{
    char A[10000];
    int i,k=0;
    scanf("%s",&A);
    int l=strlen(A);
    for(i=0;i<l;i++)
    {
        if(A[i]=='a')
            k++;
    }
    if(k*2<=l)
        l=k*2-1;
    else l=l;
    printf("%d\n",l);
    return 0;
}
