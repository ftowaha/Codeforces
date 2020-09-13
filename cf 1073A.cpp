#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b=-1;
    scanf("%d",&n);
    char A[n];
    scanf("%s",&A);
    for(i=0;i<n-1;i++)
    {
        if(A[i]!=A[i+1])
        {
            printf("YES\n");
            b=i;
            break;
        }
    }
    if(b==-1)
        printf("NO\n");
    else printf("%c%c\n",A[b],A[b+1]);
    return 0;
}
