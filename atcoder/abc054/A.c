#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==1 && b!=a)
    {
        printf("Alice\n");
    }
    else if(b==1 && b!=a)
    {
        printf("Bob\n");
    }
    else if(a==b)
    {
        printf("Draw\n");
    }
   else if(a>b){
       printf("Alice\n");
    }
    else if(b>a){
        printf("Bob\n");
    }


    return 0;
}
