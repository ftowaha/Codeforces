#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int n,i,k=0,l;
    char A[10000];
    scanf("%s",&A);
    n=strlen(A);
    for(i=0;i<n;i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
            k++;
        else if(A[i]>=48&&A[i]<=57)
        {
            l=A[i]-'0';
            if(l%2!=0)
                k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
