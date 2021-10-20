#include<stdio.h>
int main()
{
    int a,b,min=0,max=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        min=b;
        max=a;
    }
    else
    {
        min=a;
        max=b;
    }
    min=min+3;
    if(min>max)
    {
        printf("Yes\n");
    }
    else printf("No\n");


    return 0;
}
