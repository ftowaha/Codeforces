#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    b=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
            b=1;
    }
    if(b==1)
        cout<<"-1"<<endl;
    else cout<<"1"<<endl;
    return 0;
}
