#include<bits/stdc++.h>

using namespace std;

int main() {
   char a[100],b[100];
  int l,ll,lll,c;
   scanf("%s %s",a,b);
    l=min(strlen(a),strlen(b));
   ll=strlen(a);
    lll=strlen(b);
    c=0;
   for(int i=0;i<l;i++)
   {
       ll--;
       lll--;
       if(((a[ll]-'0')+(b[lll]-'0'))>9){
           cout<<"Hard"<<endl;
            c=1;
           break;
       }
   }
   if(c==0)cout<<"Easy"<<endl;
    return 0;
}