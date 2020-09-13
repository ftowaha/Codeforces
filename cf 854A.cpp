#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d",&n);
    if(n%2!=0)
    {
        a=n/2;
        b=n-a;
    }
    else if(n%4==0)
    {
        a=(n/2)+1;
        b=(n/2)-1;
    }
    else
    {
        a=(n/2)+2;
        b=(n/2)-2;
    }
    if(b>a)
    printf("%d %d\n",a,b);
    else printf("%d %d\n",b,a);
    return 0;
}
