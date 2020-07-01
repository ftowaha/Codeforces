#include <iostream>
#include<cstdio>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j;
    long long int k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        int A[m];
        k=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[j]);
            if(A[j]<=2048)
            k=k+A[j];
        }
        if(k>=2048)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
