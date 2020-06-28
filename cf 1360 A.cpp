#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        k=min(max(a,2*b),max(2*a,b));
        printf("%d\n",k*k);
    }
    return 0;
}
