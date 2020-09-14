#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,n,i;
    scanf("%d",&n);
    char A[n];
    getchar();
    gets(A);
    for(i=0;i<n;i++)
    {
        if(A[i]>='A'&&A[i]<='Z')
            a++;
        else if(A[i]==' ')
            a=0;
    }
    printf("%d\n",a);
    return 0;
}
