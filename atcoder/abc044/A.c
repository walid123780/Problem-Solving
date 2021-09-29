#include<stdio.h>
int main()
{
    int n,a,x,y,i,temp=0;
    scanf("%d%d%d%d",&n,&a,&x,&y);
    if(a>n)
    {
        for(i=1; i<=n; i++)
        {
            temp=temp+x;
        }
    }
    else
    {
        for(i=1; i<=a; i++)
        {
            temp=temp+x;
        }
        for(i=1; i<=n-a; i++)
        {
            temp=temp+y;
        }

    }
    printf("%d\n",temp);

    return 0;
}
