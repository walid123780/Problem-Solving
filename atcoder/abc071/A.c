#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,x;
    scanf("%d%d%d",&x,&a,&b);
    if(abs(x-a) < abs(x-b)) printf("A");
    else printf("B");


    return 0;
}
