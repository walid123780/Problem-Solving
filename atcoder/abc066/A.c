#include<stdio.h>
int main()
{
    int a,b,c;
    int x,y;
    scanf("%d %d %d",&a,&b,&c);
    int ar[3];
    ar[0]=a+b;
    ar[1]=a+c;
    ar[2]=b+c;
    for(x=0;x<2;x++)
    {
        for(y=x+1;y<3;y++)
            if(ar[x]>ar[y])
        {
            int z=ar[x];
            ar[x]=ar[y];
            ar[y]=z;
        }
    }
    printf("%d",ar[0]);
    return 0;
}
