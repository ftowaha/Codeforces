#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,b=0,c=0;
    scanf("%d %d %d",&l,&r,&a);
    if(l==r)
    {
        l+=(a/2);
        r+=(a/2);
    }
    else if(l>r)
    {
        if(r+a<=l)
            r=r+a;
        else
        {
            c=(r+a)-l;
            r=r+a-(c/2);
        }
    }
    else
    {
        if(l+a<=r)
            l=l+a;
        else
        {
            c=(l+a)-r;
            l=l+a-(c/2);
        }
    }
    a=min(l,r);
    a+=c/2;
    printf("%d\n",a*2);
    return 0;
}
