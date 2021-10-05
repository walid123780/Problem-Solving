#include<iostream>
  using namespace std;
  char s[4];
  int main()
  {
      cin>>s;
      int sum=0;
      for(int i=0;i<=2;i++)
      {
       if(s[i]=='1')sum++;
     }
     cout<<sum<<endl;
     return 0;
 }