#include<stdio.h>
#include<string.h>
int main()
{
    char s[11],ss[11],sss[11];
    scanf("%s %s %s",&s,&ss,&sss);
    s[0] = s[0]-32;
    ss[0] = ss[0]-32;
    sss[0] = sss[0]-32;

    printf("%c%c%c",s[0],ss[0],sss[0]);



    return 0;
}
