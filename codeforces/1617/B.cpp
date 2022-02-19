#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        int why=0,x=0,y=0;
        cin>>a;
        if(a%2==0){
            cout<<a/2<<" "<<(a/2-1)<<" 1"<<endl;
        }
        else if(a%2!=0){
                int x=a/2;
                int y=x;
            while(1){
                why=__gcd(x,y);

                if(why+x+y==a){
                    cout<<x<<" "<<y<<" "<<why<<endl;
                    break;
                }
                x++;
                y--;
            }
        }
    }

}
