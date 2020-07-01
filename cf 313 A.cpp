#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    scanf("%lld",&a);
    if(a>0)
        printf("%lld\n",a);
    else
    {
    b=a/10;
    c=a%10;
    d=((a/100)*10)+c;
    if(b>d)
        printf("%lld\n",b);
    else printf("%lld\n",d);
    }
    return 0;
}
