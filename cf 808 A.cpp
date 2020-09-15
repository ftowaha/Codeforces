#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,a,b=0,i,c;
    scanf("%lld",&n);
    c=n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        if(b==0)
            b=1;
        else
            b*=10;

    }
    a++;
    a=a*b;
    printf("%lld\n",a-c);
    return 0;
}
