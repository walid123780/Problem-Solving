#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
        if((a+b)%2==0) cout<<(a+b)/2<<endl;
        else{
            int c=(a+b)/2;
            if(a+b-2*c<=1) cout<<c+1<<endl;
            else cout<<c<<endl;
        }
    }
    return 0;
}