#include<stdio.h>
int main()
{
    int  a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a!=b && b!=c && a!=c)
    {
        printf("3\n");
    }
    else if(a==b && b==c )
    {
        printf("1");
    }
    else if(a==b && b!=c && a!=c)
    {
        printf("2");
    }
    else if(a!=b && b==c && a!=c)
    {
        printf("2");
    }
    else if(a!=b && b!=c && a==c)
    {
        printf("2");
    }
    return 0;
}
