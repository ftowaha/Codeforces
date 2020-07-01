#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,l=0,m,j;
    scanf("%lld",&m);
    for(j=0;j<m;j++)
    {
        l=0;
    scanf("%lld %lld",&n,&k);
    while(n!=0)
    {
        if(n%k==0)
            {
            n=n/k;
            l++;
            }
        else
        {
            l=l+(n%k);
            n=n-(n%k);
        }
        printf("%lld %lld\n",n,l);
    }
    printf("%lld\n",l);
    }
    return 0;
}
