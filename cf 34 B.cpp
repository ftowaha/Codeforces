#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int i,j=0,n,m,a;
    scanf("%d %d",&n,&m);
    multiset <int> set_v;
    multiset <int> ::iterator set_v1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        set_v.insert(a);
    }
    i=0;
    for(set_v1=set_v.begin();set_v1!=set_v.end();set_v1++)
    {
        a=*set_v1;
        if(a<0)
            j=j+a;
        i++;
        if(i==m)
            break;
    }
    j=-j;
    printf("%d\n",j);
    return 0;
}
