#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("9 8\n");
    else printf("%d %d\n",4*n,3*n);
    return 0;
}
