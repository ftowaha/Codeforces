#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char A[100000],B[1000000];
    scanf("%s",&A);
    strcpy(B,A);
    strrev(B);
    strcat(A,B);
    printf("%s",A);
    return 0;
}
