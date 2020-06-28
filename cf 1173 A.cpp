#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=a+b+c;
    if(a>b+c)
        printf("+\n");
    else if(b>a+c)
        printf("-\n");
    else if(a==b&&c==0)
        printf("0\n");
    else if(a+c==b||b+c==a)
        printf("?\n");
    else printf("?\n");
    return 0;
}
