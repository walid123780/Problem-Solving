#include<bits/stdc++.h>
using namespace std;
//int factorial(int n)
//{

    //return (n==1 || n==0) ? 1: n * factorial(n - 1);
//}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long long ans=1;
        cin>>n;
        if(n%2!=0) cout<<"0"<<endl;
        else {
            //long long value=n/2;
            //long long flag= factorial(value);
            //flag = flag * flag;
            //long long ans = flag %  998244353;
            for(int i=1;i<=n/2;i++){
                ans *= 1LL *(i*i)% 998244353;
                ans %= 998244353;
            }
            cout<<ans<<endl;
        }
    }


    return 0;
}
