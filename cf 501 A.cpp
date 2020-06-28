#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,k,l,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    k=a-((a/250)*c);
    l=b-((b/250)*d);
    x=3*a/10;
    y=3*b/10;
    if(x>k)
        k=x;
    if(y>l)
        l=y;
    if(k==l)
        printf("Tie\n");
    else if(k>l)
        printf("Misha\n");
    else printf("Vasya\n");
    return 0;
}
