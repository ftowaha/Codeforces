#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k=0;
    char A[10000],B[10000];
    scanf("%s",&A);
    strcpy(B,A);
    strrev(A);
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]!=B[i])
            k++;
        if(k==3)
            break;
    }
    if(k<=2)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
