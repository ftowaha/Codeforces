#include<stdio.h>
#include<string.h>
int main()
{
    int A[6]={0,0,0,0,0,0},k=0,n,i;
    char B[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&B);
        if(strcmp(B,"purple")==0)
            A[0]=1;
        else if(strcmp(B,"green")==0)
            A[1]=1;
        else if(strcmp(B,"blue")==0)
            A[2]=1;
        else if(strcmp(B,"orange")==0)
            A[3]=1;
        else if(strcmp(B,"red")==0)
            A[4]=1;
        else if(strcmp(B,"yellow")==0)
            A[5]=1;
    }
    k=A[0]+A[1]+A[2]+A[3]+A[4]+A[5];
    k=6-k;
    printf("%d\n",k);
    if(A[0]==0)
        printf("Power\n");
    else if(A[1]==0)
        printf("Time\n");
    else if(A[2]==0)
        printf("Space\n");
    else if(A[3]==0)
        printf("Soul\n");
    else if(A[4]==0)
        printf("Reality\n");
    else if(A[5]==0)
        printf("Mind\n");
    return 0;
}
