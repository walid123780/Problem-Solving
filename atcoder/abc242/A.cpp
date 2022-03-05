#include<bits/stdc++.h>
using namespace std;
int main()
{
     double n,m,a,b;
     cin>>n>>m>>a>>b;
     if(b>=1 && b<=n){
         printf("1.000000\n");
     }
     else if(b>m && b>n){
        printf("0.000000\n");
     }
     else {
        double fuck=m-n;
        printf("%.6lf\n",a/fuck);
     }

}
