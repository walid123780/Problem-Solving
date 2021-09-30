#include<stdio.h>
int main()
{
    int n,temp=0,per=0,x=0;
    scanf("%d",&n);
    per=200*(n/15);
    temp=800*n;

    x=temp-per;
    printf("%d\n",x);



    return 0;
}
