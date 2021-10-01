#include<stdio.h>
int main()
{
    int a,b,temp=0;
    scanf("%d%d",&a,&b);
    temp=a+b;

    if(temp>24)
    {
        temp=temp-24;
        printf("%d\n",temp);
        return 0;
    }
    if(temp==24)
    {
        printf("0");
    }
    else
        printf("%d\n",temp);




    return 0;
}
