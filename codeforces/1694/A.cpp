#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll t;
    cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;
        while(1){
            if(a==0 && b==0) break;
            if(b){
                cout<<"1";
                b--;
            }
            if(a){
                cout<<"0";
                a--;
            }
        }
        cout<<endl;
    }
    return 0;
}

