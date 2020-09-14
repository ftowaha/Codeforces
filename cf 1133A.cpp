#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a1,b1,a2,b2,a,b;
    scanf("%d:%d",&a1,&b1);
    scanf("%d:%d",&a2,&b2);
    a=(60*a1)+b1;
    b=(60*a2)+b2;
    a=(a+b)/2;
    b=a%60;
    a=a/60;
    if(a<10&&b<10)
        printf("0%d:0%d\n",a,b);
    else if(a<10)
        printf("0%d:%d\n",a,b);
    else if(b<10)
        printf("%d:0%d\n",a,b);
    else
        printf("%d:%d\n",a,b);
    return 0;
}
