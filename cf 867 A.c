#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char A[n];
    scanf("%s",&A);
    if(A[0]=='S'&&A[n-1]=='F')
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
