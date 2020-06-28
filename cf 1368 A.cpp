#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,k=0;
    int a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        while(1)
        {
            if(a>b)
                b+=a;
            else a+=b;
            k++;
            if(a>c||b>c)
                break;
        }
        printf("%d\n",k);
        k=0;
    }
    return 0;
}
