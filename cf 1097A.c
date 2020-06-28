#include<stdio.h>
int main()
{
    int c=0,i;
    char s[2],s1[2];
    scanf("%s",&s);
    for(i=0; i<5; i++)
    {
        scanf("%s",&s1);
        if(s[0]==s1[0])
            {
                c++;
                printf("%c %c\n",s[0],s1[0]);
            }
        else if(s[1]==s1[1])
            {
                c++;
                printf("%c %c\n",s[1],s1[1]);
            }
    }
    if(c>0)
        printf("YES\n");
    else
        printf("NO\n");

}
