#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a;
    cin>>n>>a;
    if(a%n==0){
        cout<<a/n<<endl;
    }
    else cout<<(a/n)+1<<endl;
    return 0;
}
