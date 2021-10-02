#include<stdio.h>
int main()
{
    int a,b,temp=0;
    scanf("%d%d",&a,&b);
    if((a+b)%3==0 || a%3==0 || b%3==0)
    {
        printf("Possible");
    }
    else printf("Impossible");



    return 0;
}
