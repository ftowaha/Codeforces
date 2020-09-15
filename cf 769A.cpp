#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    sort(A,A+n);
    n=(n/2);
    printf("%d\n",A[n]);
    return 0;
}
